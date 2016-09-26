<?php
/**
 * @file
 * misc_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function misc_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'About Us';
  $page->admin_description = '';
  $page->path = 'about-us';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'EN',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'de' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_robert';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'foot-panel' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About Us';
  $display->uuid = 'e76b115b-5ef3-4341-8e74-c98d7b76559e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6fc083b8-aa8f-4d19-9646-218e1d0793ef';
  $pane->panel = 'foot-panel';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6ebe2860-42fe-41b0-ab3e-7028a6f98e19';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'default' => 0,
            'en' => 0,
            'de' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'mlpanels' => array(
      'und' => array(
        'view_mode' => 'full',
        'fieldable_panels_pane' => (object) array(
          'bundle' => 'text',
          'language' => 'und',
          'is_new' => TRUE,
          'title' => '',
          'link' => 0,
          'path' => '',
          'reusable' => 1,
          'admin_title' => 'AboutUsBottomPanelheading',
          'admin_description' => '',
          'category' => 'Reusable Content',
          'vid' => '105',
          'current_vid' => '',
          'revision' => 1,
          'fpid' => '45',
          'field_basic_text_text' => array(
            'und' => array(
              0 => array(
                'value' => '<Center><h2>Milestones of the Professional\'s Brand</h2><h3>40 Years Beha-Amprobe</h3></Center>',
                'format' => 'panopoly_html_text',
              ),
            ),
          ),
          'log' => '',
          'created' => 1453836182,
          'timestamp' => 1453836182,
          'changed' => 1453836182,
          'uuid' => '6ebe2860-42fe-41b0-ab3e-7028a6f98e19',
          'vuuid' => '79ab8d02-78af-4f9c-b683-b98ccb48b11f',
          'uid' => '193',
        ),
      ),
    ),
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'AboutUsBottomPanelheading',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '105',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '45',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<Center><h2>Milestones of the Professional\'s Brand</h2><h3>40 Years Beha-Amprobe</h3></Center>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1453836182,
      'timestamp' => 1453836182,
      'changed' => 1453836182,
      'uuid' => '6ebe2860-42fe-41b0-ab3e-7028a6f98e19',
      'vuuid' => '79ab8d02-78af-4f9c-b683-b98ccb48b11f',
      'uid' => '193',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'wrapper_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6fc083b8-aa8f-4d19-9646-218e1d0793ef';
  $display->content['new-6fc083b8-aa8f-4d19-9646-218e1d0793ef'] = $pane;
  $display->panels['foot-panel'][0] = 'new-6fc083b8-aa8f-4d19-9646-218e1d0793ef';
  $pane = new stdClass();
  $pane->pid = 'new-7ee6b073-65fe-45dd-9493-ab1d5c1ec80d';
  $pane->panel = 'foot-panel';
  $pane->type = 'views_panes';
  $pane->subtype = 'timelinecontactus-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'home_page_slider',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7ee6b073-65fe-45dd-9493-ab1d5c1ec80d';
  $display->content['new-7ee6b073-65fe-45dd-9493-ab1d5c1ec80d'] = $pane;
  $display->panels['foot-panel'][1] = 'new-7ee6b073-65fe-45dd-9493-ab1d5c1ec80d';
  $pane = new stdClass();
  $pane->pid = 'new-9d674536-2703-4300-a185-54544104f702';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_banners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '17009',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d674536-2703-4300-a185-54544104f702';
  $display->content['new-9d674536-2703-4300-a185-54544104f702'] = $pane;
  $display->panels['header'][0] = 'new-9d674536-2703-4300-a185-54544104f702';
  $pane = new stdClass();
  $pane->pid = 'new-30b0543a-8bf0-4c4f-b7a4-0abebe082699';
  $pane->panel = 'left';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:3d781e9a-1be9-4505-af12-cc268e3e810d';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'default' => 0,
            'en' => 0,
            'de' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'mlpanels' => array(
      'und' => array(
        'view_mode' => 'full',
        'fieldable_panels_pane' => (object) array(
          'bundle' => 'text',
          'language' => '',
          'is_new' => TRUE,
          'title' => '',
          'link' => 0,
          'path' => '',
          'reusable' => 1,
          'admin_title' => 'AboutUsLeftPanel',
          'admin_description' => '',
          'category' => 'Reusable Content',
          'vid' => '98',
          'current_vid' => '',
          'revision' => 1,
          'fpid' => '42',
          'field_basic_text_text' => array(
            'und' => array(
              0 => array(
                'value' => '<h1>Beha-Amprobe</h1>
<p>Welcome to Beha-Amprobe, the place to find great quality testing tools for electricians. With a combined experience of over 100 years, well-known German brand Beha and US-based Amprobe have a track record to be proud of. Now we have joined forces, and together we are committed to making your job safer, faster and easier than ever.</p>
Our expertise is legendary. Almost 70 years ago in 1948, we invented the very first clamp meter, and we haven’t stopped innovating since. From multimeters to voltage detectors, at Beha-Amprobe we constantly improve our designs to provide you with the very best quality tools and support.',
                'format' => 'panopoly_html_text',
              ),
            ),
          ),
          'log' => '',
          'created' => 1453703627,
          'timestamp' => 1453703627,
          'changed' => 1453703627,
          'uuid' => '3d781e9a-1be9-4505-af12-cc268e3e810d',
          'vuuid' => '38c925df-b63e-4b0e-b08b-daef0b7586f5',
          'uid' => '193',
        ),
      ),
    ),
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'AboutUsLeftPanel',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '98',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '42',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h1>Beha-Amprobe</h1>
<p>Welcome to Beha-Amprobe, the place to find great quality testing tools for electricians. With a combined experience of over 100 years, well-known German brand Beha and US-based Amprobe have a track record to be proud of. Now we have joined forces, and together we are committed to making your job safer, faster and easier than ever.</p>
Our expertise is legendary. Almost 70 years ago in 1948, we invented the very first clamp meter, and we haven’t stopped innovating since. From multimeters to voltage detectors, at Beha-Amprobe we constantly improve our designs to provide you with the very best quality tools and support.',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1453703627,
      'timestamp' => 1453703627,
      'changed' => 1453703627,
      'uuid' => '3d781e9a-1be9-4505-af12-cc268e3e810d',
      'vuuid' => '38c925df-b63e-4b0e-b08b-daef0b7586f5',
      'uid' => '193',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '30b0543a-8bf0-4c4f-b7a4-0abebe082699';
  $display->content['new-30b0543a-8bf0-4c4f-b7a4-0abebe082699'] = $pane;
  $display->panels['left'][0] = 'new-30b0543a-8bf0-4c4f-b7a4-0abebe082699';
  $pane = new stdClass();
  $pane->pid = 'new-ef5f11b0-27d5-4fe1-85b1-5ed561d11e49';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:5fe9a05a-3005-4811-94c7-ac1ffd2c3c05';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'default' => 0,
            'en' => 0,
            'de' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'mlpanels' => array(
      'und' => array(
        'view_mode' => 'full',
        'fieldable_panels_pane' => (object) array(
          'bundle' => 'text',
          'language' => '',
          'is_new' => TRUE,
          'title' => '',
          'link' => 0,
          'path' => '',
          'reusable' => 1,
          'admin_title' => 'AboutUsRightPanel',
          'admin_description' => '',
          'category' => 'Reusable Content',
          'vid' => '99',
          'current_vid' => '',
          'revision' => 1,
          'fpid' => '43',
          'field_basic_text_text' => array(
            'und' => array(
              0 => array(
                'value' => '<h2>Innovative Testing Tools For <br>Electricians</h2>
<p>Whether you need testing tools for industrial, commercial or residential applications, at Beha-Amprobe we offer innovative test equipment to fit your needs. All of our tools undergo rigorous testing to ensure the quality and safety you know and trust.</p><p>Our products are sold and supported by a wide range of dealers and are backed up by a professional support service. This makes Beha-Amprobe the right place for installation testers, appliance testers (PAT), voltage detectors and continuity testers, digital multimeters, clamp meters and thermometers, for taking measurements in residential, HVAC, electrical and industrial applications, and many other testing tools.</p>
',
                'format' => 'panopoly_html_text',
              ),
            ),
          ),
          'log' => '',
          'created' => 1453703947,
          'timestamp' => 1453703947,
          'changed' => 1453703947,
          'uuid' => '5fe9a05a-3005-4811-94c7-ac1ffd2c3c05',
          'vuuid' => 'b9378106-644a-4cbe-8e38-c4dff5ee326d',
          'uid' => '193',
        ),
      ),
    ),
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'AboutUsRightPanel',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '99',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '43',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h2>Innovative Testing Tools For <br>Electricians</h2>
<p>Whether you need testing tools for industrial, commercial or residential applications, at Beha-Amprobe we offer innovative test equipment to fit your needs. All of our tools undergo rigorous testing to ensure the quality and safety you know and trust.</p><p>Our products are sold and supported by a wide range of dealers and are backed up by a professional support service. This makes Beha-Amprobe the right place for installation testers, appliance testers (PAT), voltage detectors and continuity testers, digital multimeters, clamp meters and thermometers, for taking measurements in residential, HVAC, electrical and industrial applications, and many other testing tools.</p>
',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1453703947,
      'timestamp' => 1453703947,
      'changed' => 1453703947,
      'uuid' => '5fe9a05a-3005-4811-94c7-ac1ffd2c3c05',
      'vuuid' => 'b9378106-644a-4cbe-8e38-c4dff5ee326d',
      'uid' => '193',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ef5f11b0-27d5-4fe1-85b1-5ed561d11e49';
  $display->content['new-ef5f11b0-27d5-4fe1-85b1-5ed561d11e49'] = $pane;
  $display->panels['right'][0] = 'new-ef5f11b0-27d5-4fe1-85b1-5ed561d11e49';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us__german-version-of-about-us';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'DE',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'german-version-of-about-us',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'de' => 'de',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_robert';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'foot-panel' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Über Uns';
  $display->uuid = 'e76b115b-5ef3-4341-8e74-c98d7b76559e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1d70aa5e-17ee-4c14-a9d3-3ae3eaaf2e9c';
  $pane->panel = 'foot-panel';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AboutUsBottomPanelheading_DE',
    'title' => '',
    'body' => ' <div style="text-align:center"><h3>Historische Meilensteine</h3><h2>40 Jahre BEHA-Amprobe</h2></div>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d70aa5e-17ee-4c14-a9d3-3ae3eaaf2e9c';
  $display->content['new-1d70aa5e-17ee-4c14-a9d3-3ae3eaaf2e9c'] = $pane;
  $display->panels['foot-panel'][0] = 'new-1d70aa5e-17ee-4c14-a9d3-3ae3eaaf2e9c';
  $pane = new stdClass();
  $pane->pid = 'new-7ee6b073-65fe-45dd-9493-ab1d5c1ec80d';
  $pane->panel = 'foot-panel';
  $pane->type = 'views_panes';
  $pane->subtype = 'timelinecontactus-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'default' => 0,
            'en' => 0,
            'de' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'home_page_slider',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7ee6b073-65fe-45dd-9493-ab1d5c1ec80d';
  $display->content['new-7ee6b073-65fe-45dd-9493-ab1d5c1ec80d'] = $pane;
  $display->panels['foot-panel'][1] = 'new-7ee6b073-65fe-45dd-9493-ab1d5c1ec80d';
  $pane = new stdClass();
  $pane->pid = 'new-9d674536-2703-4300-a185-54544104f702';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_banners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mlpanels' => array(
      'und' => array(
        'arguments' => array(
          'nid' => '17009',
        ),
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
    ),
    'arguments' => array(
      'nid' => '17009',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d674536-2703-4300-a185-54544104f702';
  $display->content['new-9d674536-2703-4300-a185-54544104f702'] = $pane;
  $display->panels['header'][0] = 'new-9d674536-2703-4300-a185-54544104f702';
  $pane = new stdClass();
  $pane->pid = 'new-61297259-e9e5-4bf0-9203-a7987f2154c5';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AboutUsLeftPanel_DE',
    'title' => 'Beha-Amprobe',
    'body' => '<p>Herzlich willkommen bei Beha-Amprobe, der richtigen Stelle, an der Sie hochwertige Messgerätefür Elektriker finden. Mit einer gemeinsamen Erfahrung von mehr als 100 Jahren haben die bekannte deutsche Marke BEHA und das amerikanische Amprobe eine Erfolgsbilanz, auf die man stolz sein kann. Jetzt haben wir unsere Kräfte gebündelt und gemeinsam setzen wir uns dafür ein, Ihren Job sicherer, schneller und einfacher als je zuvor zu machen.</p>

<p>Unsere Expertise ist legendär. Wir haben vor nahezu 70 Jahren, im Jahre 1948 die allererste Stromzange erfunden und seitdem gibt es immer wieder neue Innovationen. Von Multimetern bis hin zu Spannungsprüfern, bei Beha-Amprobe verbessern wir ständig unsere Designs, um Ihnen die allerbesten Qualitätswerkzeugen und unsere Unterstützung zu bieten.</p>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '61297259-e9e5-4bf0-9203-a7987f2154c5';
  $display->content['new-61297259-e9e5-4bf0-9203-a7987f2154c5'] = $pane;
  $display->panels['left'][0] = 'new-61297259-e9e5-4bf0-9203-a7987f2154c5';
  $pane = new stdClass();
  $pane->pid = 'new-2b8a0d91-b26e-43ed-ba61-648aaed2d47f';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AboutUsRightPanel_DE',
    'title' => 'Innovative Messgeräte für Elektriker',
    'body' => '<p>Egal, ob Sie Messgeräte für industrielle, kommerzielle oder Anwendungen im privaten Bereich benötigen, bei Beha-Amprobe bieten wir innovative Prüfwerkzeuge, die Ihren Bedürfnissen entsprechen. Alle unsere Werkzeuge werden strengen Prüfungen unterzogen, um die Qualität und Sicherheit zu gewährleisten, die Sie kennen und auf die Sie sich verlassen können.</p>
<p>Unsere Produkte werden von einer breiten Skala Händler verkauft und betreut und durch einen professionellen Kundenservice unterstützt. Damit sind Sie bei Beha-Amprobe an der richtigen Stelle für Installationstester, VDE-Prüfgeräte, Voltmeter und Durchgangsprüfer, digitale Multimeter, Stromzangen und Thermometer, mit denen Sie Messungen in Wohnungen, HLK-Anlagen, elektrischen und industriellen Anwendungen vornehmen können, sowie noch viele andere Prüfwerkzeuge.</p>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2b8a0d91-b26e-43ed-ba61-648aaed2d47f';
  $display->content['new-2b8a0d91-b26e-43ed-ba61-648aaed2d47f'] = $pane;
  $display->panels['right'][0] = 'new-2b8a0d91-b26e-43ed-ba61-648aaed2d47f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_ryan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c6f04fd-00aa-4f01-8e77-6952882b64b9';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product_subcategory_page';
  $page->task = 'page';
  $page->admin_title = 'Product Subcategory Page';
  $page->admin_description = 'Landing page for a product subcategory';
  $page->path = 'products/%category/%subcategory';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'category' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          23 => '23',
          30 => 0,
          31 => 0,
          4 => 0,
          22 => 0,
          10 => 0,
          1 => 0,
          21 => 0,
          32 => 0,
          33 => 0,
          34 => 0,
          12 => 0,
          26 => 0,
          14 => 0,
          15 => 0,
          38 => 0,
          3 => 0,
          27 => 0,
          25 => 0,
          18 => 0,
          24 => 0,
          35 => 0,
          7 => 0,
          36 => 0,
          29 => 0,
          5 => 0,
          37 => 0,
          9 => 0,
          13 => 0,
          11 => 0,
          28 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
    'subcategory' => array(
      'id' => 2,
      'identifier' => 'Taxonomy term: ID 2',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          23 => '23',
          30 => 0,
          31 => 0,
          4 => 0,
          22 => 0,
          10 => 0,
          1 => 0,
          21 => 0,
          32 => 0,
          33 => 0,
          34 => 0,
          12 => 0,
          26 => 0,
          14 => 0,
          15 => 0,
          38 => 0,
          3 => 0,
          27 => 0,
          25 => 0,
          18 => 0,
          24 => 0,
          35 => 0,
          7 => 0,
          36 => 0,
          29 => 0,
          5 => 0,
          37 => 0,
          9 => 0,
          13 => 0,
          11 => 0,
          28 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_subcategory_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'product_subcategory_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'EN',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '%category:i18n-name | [site:name]',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_pascal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f739d5b-8f9e-412d-93c2-fe8f208138df';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7683eb4b-e8ee-475f-818d-9e38a9c617db';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_toc-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'row',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7683eb4b-e8ee-475f-818d-9e38a9c617db';
  $display->content['new-7683eb4b-e8ee-475f-818d-9e38a9c617db'] = $pane;
  $display->panels['contentmain'][0] = 'new-7683eb4b-e8ee-475f-818d-9e38a9c617db';
  $pane = new stdClass();
  $pane->pid = 'new-5b386759-02ad-495d-a877-b7ba7c47fc82';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_solr_index-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5b386759-02ad-495d-a877-b7ba7c47fc82';
  $display->content['new-5b386759-02ad-495d-a877-b7ba7c47fc82'] = $pane;
  $display->panels['contentmain'][1] = 'new-5b386759-02ad-495d-a877-b7ba7c47fc82';
  $pane = new stdClass();
  $pane->pid = 'new-26025011-2e95-4df1-89f7-368f8f52bd5d';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_banners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '26025011-2e95-4df1-89f7-368f8f52bd5d';
  $display->content['new-26025011-2e95-4df1-89f7-368f8f52bd5d'] = $pane;
  $display->panels['header'][0] = 'new-26025011-2e95-4df1-89f7-368f8f52bd5d';
  $pane = new stdClass();
  $pane->pid = 'new-01b4748a-5dee-456e-82b8-391e01262ddb';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_category_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '01b4748a-5dee-456e-82b8-391e01262ddb';
  $display->content['new-01b4748a-5dee-456e-82b8-391e01262ddb'] = $pane;
  $display->panels['sidebar'][0] = 'new-01b4748a-5dee-456e-82b8-391e01262ddb';
  $pane = new stdClass();
  $pane->pid = 'new-16db296e-61c2-4014-a6e5-64c8decbbd62';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filters',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'subcat-filters',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '16db296e-61c2-4014-a6e5-64c8decbbd62';
  $display->content['new-16db296e-61c2-4014-a6e5-64c8decbbd62'] = $pane;
  $display->panels['sidebar'][1] = 'new-16db296e-61c2-4014-a6e5-64c8decbbd62';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_subcategory_page__de';
  $handler->task = 'page';
  $handler->subtask = 'product_subcategory_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'DE',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'de',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'de' => 'de',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '%category:i18n-name | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_pascal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f739d5b-8f9e-412d-93c2-fe8f208138df';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7683eb4b-e8ee-475f-818d-9e38a9c617db';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_toc-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'row',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7683eb4b-e8ee-475f-818d-9e38a9c617db';
  $display->content['new-7683eb4b-e8ee-475f-818d-9e38a9c617db'] = $pane;
  $display->panels['contentmain'][0] = 'new-7683eb4b-e8ee-475f-818d-9e38a9c617db';
  $pane = new stdClass();
  $pane->pid = 'new-2fce9c01-013e-4349-825a-494382337138';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_toc-parent_subcategory_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2fce9c01-013e-4349-825a-494382337138';
  $display->content['new-2fce9c01-013e-4349-825a-494382337138'] = $pane;
  $display->panels['contentmain'][1] = 'new-2fce9c01-013e-4349-825a-494382337138';
  $pane = new stdClass();
  $pane->pid = 'new-f13beba4-18c1-45a2-ac76-fe0230bba960';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_solr_index-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f13beba4-18c1-45a2-ac76-fe0230bba960';
  $display->content['new-f13beba4-18c1-45a2-ac76-fe0230bba960'] = $pane;
  $display->panels['contentmain'][2] = 'new-f13beba4-18c1-45a2-ac76-fe0230bba960';
  $pane = new stdClass();
  $pane->pid = 'new-26025011-2e95-4df1-89f7-368f8f52bd5d';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_banners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '26025011-2e95-4df1-89f7-368f8f52bd5d';
  $display->content['new-26025011-2e95-4df1-89f7-368f8f52bd5d'] = $pane;
  $display->panels['header'][0] = 'new-26025011-2e95-4df1-89f7-368f8f52bd5d';
  $pane = new stdClass();
  $pane->pid = 'new-b57c8b2e-802a-4624-ad7b-e4da9c8da990';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-fluke_product_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b57c8b2e-802a-4624-ad7b-e4da9c8da990';
  $display->content['new-b57c8b2e-802a-4624-ad7b-e4da9c8da990'] = $pane;
  $display->panels['sidebar'][0] = 'new-b57c8b2e-802a-4624-ad7b-e4da9c8da990';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product_subcategory_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products';
  $page->task = 'page';
  $page->admin_title = 'Products';
  $page->admin_description = 'Standard Products listing page (by category)';
  $page->path = 'products/%category';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'category' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          23 => '23',
          30 => 0,
          31 => 0,
          4 => 0,
          22 => 0,
          10 => 0,
          1 => 0,
          21 => 0,
          32 => 0,
          33 => 0,
          34 => 0,
          12 => 0,
          26 => 0,
          14 => 0,
          15 => 0,
          38 => 0,
          3 => 0,
          27 => 0,
          25 => 0,
          18 => 0,
          24 => 0,
          35 => 0,
          7 => 0,
          39 => 0,
          36 => 0,
          29 => 0,
          5 => 0,
          37 => 0,
          9 => 0,
          13 => 0,
          11 => 0,
          28 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products__panel';
  $handler->task = 'page';
  $handler->subtask = 'products';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'English Product Page',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '%category:i18n-name | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_pascal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%category:i18n-name';
  $display->uuid = '91270e54-fe1f-4527-b5d0-55b57fab1a44';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-edcbcc51-297e-4a52-98d2-cf83904d9495';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_toc-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'edcbcc51-297e-4a52-98d2-cf83904d9495';
  $display->content['new-edcbcc51-297e-4a52-98d2-cf83904d9495'] = $pane;
  $display->panels['contentmain'][0] = 'new-edcbcc51-297e-4a52-98d2-cf83904d9495';
  $pane = new stdClass();
  $pane->pid = 'new-dc3dc5f3-31fa-4907-bf0d-a7a0d0424304';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_subcategory_toc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc3dc5f3-31fa-4907-bf0d-a7a0d0424304';
  $display->content['new-dc3dc5f3-31fa-4907-bf0d-a7a0d0424304'] = $pane;
  $display->panels['contentmain'][1] = 'new-dc3dc5f3-31fa-4907-bf0d-a7a0d0424304';
  $pane = new stdClass();
  $pane->pid = 'new-327fd879-8b8b-463e-a3aa-cb961f9fac22';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_solr_index-product_category_solr';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '327fd879-8b8b-463e-a3aa-cb961f9fac22';
  $display->content['new-327fd879-8b8b-463e-a3aa-cb961f9fac22'] = $pane;
  $display->panels['contentmain'][2] = 'new-327fd879-8b8b-463e-a3aa-cb961f9fac22';
  $pane = new stdClass();
  $pane->pid = 'new-a42f72c8-9bfd-4054-908b-bfc6b350fc18';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_parent_subcategory_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a42f72c8-9bfd-4054-908b-bfc6b350fc18';
  $display->content['new-a42f72c8-9bfd-4054-908b-bfc6b350fc18'] = $pane;
  $display->panels['contentmain'][3] = 'new-a42f72c8-9bfd-4054-908b-bfc6b350fc18';
  $pane = new stdClass();
  $pane->pid = 'new-91f723ec-fee8-4052-bb7c-82ae046d5ef5';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_toc-panel_pane_4';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'mlpanels' => array(
      'und' => array(
        'view_settings' => 'fields',
        'header_type' => 'titles',
        'view_mode' => 'full',
      ),
    ),
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '91f723ec-fee8-4052-bb7c-82ae046d5ef5';
  $display->content['new-91f723ec-fee8-4052-bb7c-82ae046d5ef5'] = $pane;
  $display->panels['header'][0] = 'new-91f723ec-fee8-4052-bb7c-82ae046d5ef5';
  $pane = new stdClass();
  $pane->pid = 'new-94944704-5503-40b7-a9b5-c5b7b465ec16';
  $pane->panel = 'header';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_banner_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94944704-5503-40b7-a9b5-c5b7b465ec16';
  $display->content['new-94944704-5503-40b7-a9b5-c5b7b465ec16'] = $pane;
  $display->panels['header'][1] = 'new-94944704-5503-40b7-a9b5-c5b7b465ec16';
  $pane = new stdClass();
  $pane->pid = 'new-ec4d0eed-c115-4752-8b4f-a2f050241d81';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_category_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ec4d0eed-c115-4752-8b4f-a2f050241d81';
  $display->content['new-ec4d0eed-c115-4752-8b4f-a2f050241d81'] = $pane;
  $display->panels['sidebar'][0] = 'new-ec4d0eed-c115-4752-8b4f-a2f050241d81';
  $pane = new stdClass();
  $pane->pid = 'new-86ff9dcf-c454-4a55-938b-3761e3862ace';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mlpanels' => array(
      'und' => array(
        'override_title' => 1,
        'override_title_text' => 'Testing Facets',
        'override_title_heading' => 'h2',
      ),
    ),
    'override_title' => 0,
    'override_title_text' => 'Testing Facets',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '86ff9dcf-c454-4a55-938b-3761e3862ace';
  $display->content['new-86ff9dcf-c454-4a55-938b-3761e3862ace'] = $pane;
  $display->panels['sidebar'][1] = 'new-86ff9dcf-c454-4a55-938b-3761e3862ace';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Products landing page';
  $page->admin_description = '';
  $page->path = 'products';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'products_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'EN',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'de' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_pascal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = '5a35072c-e327-4cd1-a295-8d6d8e2df653';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4a10a159-2568-4190-bf51-a8549e55060f';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_category_toc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4a10a159-2568-4190-bf51-a8549e55060f';
  $display->content['new-4a10a159-2568-4190-bf51-a8549e55060f'] = $pane;
  $display->panels['contentmain'][0] = 'new-4a10a159-2568-4190-bf51-a8549e55060f';
  $pane = new stdClass();
  $pane->pid = 'new-bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_banners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '17009',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b';
  $display->content['new-bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b'] = $pane;
  $display->panels['header'][0] = 'new-bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b';
  $pane = new stdClass();
  $pane->pid = 'new-173705d2-b814-4307-b8e8-987951d3b859';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_category_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '173705d2-b814-4307-b8e8-987951d3b859';
  $display->content['new-173705d2-b814-4307-b8e8-987951d3b859'] = $pane;
  $display->panels['sidebar'][0] = 'new-173705d2-b814-4307-b8e8-987951d3b859';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_landing_page__de';
  $handler->task = 'page';
  $handler->subtask = 'products_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'DE',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'de',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'de' => 'de',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flukestrap_pascal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Produkte';
  $display->uuid = '5a35072c-e327-4cd1-a295-8d6d8e2df653';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9097d3c2-23d8-41d6-9fb6-41107a4b20fe';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_category_toc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9097d3c2-23d8-41d6-9fb6-41107a4b20fe';
  $display->content['new-9097d3c2-23d8-41d6-9fb6-41107a4b20fe'] = $pane;
  $display->panels['contentmain'][0] = 'new-9097d3c2-23d8-41d6-9fb6-41107a4b20fe';
  $pane = new stdClass();
  $pane->pid = 'new-bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_banners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '17009',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b';
  $display->content['new-bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b'] = $pane;
  $display->panels['header'][0] = 'new-bf2fc2bf-2c4d-47fc-9b13-2ae3897b300b';
  $pane = new stdClass();
  $pane->pid = 'new-173705d2-b814-4307-b8e8-987951d3b859';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'fluke_utility-product_category_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '173705d2-b814-4307-b8e8-987951d3b859';
  $display->content['new-173705d2-b814-4307-b8e8-987951d3b859'] = $pane;
  $display->panels['sidebar'][0] = 'new-173705d2-b814-4307-b8e8-987951d3b859';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products_landing_page'] = $page;

  return $pages;

}
