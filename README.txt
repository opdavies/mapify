CONTENTS OF THIS FILE
---------------------

 * About
 * Dependencies
 * Installation
 * Usage
 * Author

ABOUT
-----

This module integrates the mapify.js library into Drupal.

Project links:
 * http://etiennemartin.ca/mapify
 * https://github.com/etienne-martin/mapify

DEPENDENCIES
------------

 * https://www.drupal.org/project/jquery_update
 * https://www.drupal.org/project/libraries

INSTALLATION
------------

 * Download the Mapify library from https://github.com/etienne-martin/mapify,
   rename it to "mapify" and place it within the sites/*/libraries directory.
 * Place this module within your sites/*/modules or sites/*/modules/contrib
   directory and enable it and it's dependencies.
 * Optionally, enable the Mapify Examples sub-module to see examples of Mapify
   within Drupal.
    * Simple example - /mapify-simple-example
    * Popup example - /mapify-popup-example

USAGE
-----

 * Go to /admin/config/user-interface/mapify and configure any paths where you
   don't want the Mapify library to be loaded (admin pages are disabled by
   default).
 * Go to /admin/config/development/jquery_update and set the default jQuery
   version to be 1.7 or higher.
 * You can now use the "mapify()" function within your custom JavaScript.

 AUTHOR
 ------

 Oliver Davies - https://www.drupal.org/u/opdavies
