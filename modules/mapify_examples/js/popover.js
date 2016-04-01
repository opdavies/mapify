jQuery("img[usemap]").mapify({
  popOver: {
    content: function(zone){
      return "<strong>"+zone.attr("data-title")+"</strong>"+zone.attr("data-nbmembre")+" Members";
    },
    delay: 0.7,
    margin: "15px",
    height: "130px",
    width: "260px"
  }
});
