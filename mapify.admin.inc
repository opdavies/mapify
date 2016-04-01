<?php

/**
 * @file
 * Administration page callbacks for the Mapify module.
 */

/**
 * Page callback: Displays the Mapify settings form.
 */
function mapify_settings_form($form, &$form_state) {
  $form['pages'] = array(
    '#title' => t('Pages'),
    '#type' => 'fieldset',
    '#description' => t("Enter one page per line as Drupal paths. The '*' character is a wildcard. %front is the front page.", array('%front' => '<front>')),
  );

  $form['pages']['mapify_paths_disable'] = array(
    '#title' => t('Do not load Mapify on the following paths'),
    '#type' => 'textarea',
    '#default_value' => variable_get('mapify_paths_disable', ''),
  );

  return system_settings_form($form);
}
