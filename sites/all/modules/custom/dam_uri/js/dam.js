(function ($) {
  Drupal.behaviors.dam_uri = {
    attach: function (context, settings) {
      jQuery("#"+Drupal.settings.dam_uri.id.replace("dam-uri-search", "dam-uri-id")).val(Drupal.settings.dam_uri.did);
      jQuery("#"+Drupal.settings.dam_uri.id.replace("dam-uri-search", "dam-uri-url")).val(Drupal.settings.dam_uri.url);
      jQuery("#"+Drupal.settings.dam_uri.id.replace("dam-uri-search", "dam-uri-alt")).val(Drupal.settings.dam_uri.alt);
      jQuery("#"+Drupal.settings.dam_uri.id.replace("dam-uri-search", "dam-uri-caption")).val(Drupal.settings.dam_uri.caption);
    }
  };
}(jQuery));
