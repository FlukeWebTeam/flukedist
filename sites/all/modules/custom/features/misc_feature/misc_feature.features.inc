<?php
/**
 * @file
 * misc_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function misc_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function misc_feature_image_default_styles() {
  $styles = array();

  // Exported image style: 12-9-nest_5-col_3to2-ratio_desktop-lg_365x243.
  $styles['12-9-nest_5-col_3to2-ratio_desktop-lg_365x243'] = array(
    'label' => '12-9-nest 5-col 3to2-ratio Desktop-LG 365x243',
    'effects' => array(
      81 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 365,
          'height' => 243,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 12-9-nest_5-col_3to2-ratio_desktop-md_283x188.
  $styles['12-9-nest_5-col_3to2-ratio_desktop-md_283x188'] = array(
    'label' => '12-9-nest 5-col 3to2-ratio Desktop-MD 283x188',
    'effects' => array(
      82 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 283,
          'height' => 188,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 12-col_3to2-ratio_mobile_737x491.
  $styles['12-col_3to2-ratio_mobile_737x491'] = array(
    'label' => '12-col 3to2-ratio Mobile 737x491',
    'effects' => array(
      80 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 737,
          'height' => 491,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 4-col_3to2-ratio_desktop-lg_390x260.
  $styles['4-col_3to2-ratio_desktop-lg_390x260'] = array(
    'label' => '4-col 3to2-ratio Desktop-LG 390x260',
    'effects' => array(
      84 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 390,
          'height' => 260,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 4-col_3to2-ratio_desktop-md_304x202.
  $styles['4-col_3to2-ratio_desktop-md_304x202'] = array(
    'label' => '4-col 3to2-ratio Desktop-MD 304x202',
    'effects' => array(
      85 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 304,
          'height' => 202,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 5-col_3to2-ratio_tablet_400x266.
  $styles['5-col_3to2-ratio_tablet_400x266'] = array(
    'label' => '5-col 3to2-ratio Tablet 400x266',
    'effects' => array(
      83 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 266,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 6-col_3to2-ratio_desktop-md_471x314.
  $styles['6-col_3to2-ratio_desktop-md_471x314'] = array(
    'label' => '6-col 3to2-ratio Desktop-MD 471x314',
    'effects' => array(
      76 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 471,
          'height' => 314,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 6-col_3to2-ratio_mobile_354x236.
  $styles['6-col_3to2-ratio_mobile_354x236'] = array(
    'label' => '6-col 3to2-ratio Mobile 354x236',
    'effects' => array(),
  );

  // Exported image style: 6-column_3to2_desktop_600x400.
  $styles['6-column_3to2_desktop_600x400'] = array(
    'label' => '6-col 3to2-ratio Desktop-LG 600x400',
    'effects' => array(
      75 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 7-col_3to2-ratio_desktop-lg_705x470.
  $styles['7-col_3to2-ratio_desktop-lg_705x470'] = array(
    'label' => '7-col 3to2-ratio Desktop-LG 705x470',
    'effects' => array(
      77 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 705,
          'height' => 470,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 7-col_3to2-ratio_desktop-md_555x370.
  $styles['7-col_3to2-ratio_desktop-md_555x370'] = array(
    'label' => '7-col 3to2-ratio Desktop-MD 555x370',
    'effects' => array(
      78 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 370,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 7-col_3to2-ratio_tablet_572x381.
  $styles['7-col_3to2-ratio_tablet_572x381'] = array(
    'label' => '7-col 3to2-ratio Tablet 572x381',
    'effects' => array(
      79 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 572,
          'height' => 381,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article-topic-footbreakpoints_theme_flukestrap_mobile_1x.
  $styles['article-topic-footbreakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'article-topic-footbreakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      22 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 354,
          'height' => 236,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article-topic-headbreakpoints_theme_flukestrap_desktop_large_1x.
  $styles['article-topic-headbreakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => 'article-topic-headbreakpoints_theme_flukestrap_desktop_large_1x',
    'effects' => array(
      10 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 365,
          'height' => 243,
          'strength' => 'high',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article-topic-headbreakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['article-topic-headbreakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => 'article-topic-headbreakpoints_theme_flukestrap_desktop_medium_1x',
    'effects' => array(
      11 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 283,
          'height' => 188,
          'strength' => 'high',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article-topic-headbreakpoints_theme_flukestrap_mobile_1x.
  $styles['article-topic-headbreakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'article-topic-headbreakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      13 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 545,
          'height' => 363,
          'strength' => 'high',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article-topic-headbreakpoints_theme_flukestrap_tablet_1x.
  $styles['article-topic-headbreakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => 'article-topic-headbreakpoints_theme_flukestrap_tablet_1x',
    'effects' => array(
      12 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 266,
          'strength' => 'high',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article-topic-listbreakpoints_theme_flukestrap_desktop_large_1x.
  $styles['article-topic-listbreakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => 'article-topic-listbreakpoints_theme_flukestrap_desktop_large_1x',
    'effects' => array(
      18 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 206,
          'height' => 136,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: article-topic-listbreakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['article-topic-listbreakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => 'article-topic-listbreakpoints_theme_flukestrap_desktop_medium_1x',
    'effects' => array(
      19 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 158,
          'height' => 105,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article-topic-listbreakpoints_theme_flukestrap_mobile_1x.
  $styles['article-topic-listbreakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'article-topic-listbreakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      21 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 162,
          'height' => 108,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article-topic-listbreakpoints_theme_flukestrap_tablet_1x.
  $styles['article-topic-listbreakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => 'article-topic-listbreakpoints_theme_flukestrap_tablet_1x',
    'effects' => array(
      20 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 228,
          'height' => 152,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_a1d_breakpoints_theme_flukestrap_desktop_large_1x.
  $styles['article_a1d_breakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => 'article_a1d_breakpoints_theme_flukestrap_desktop_large_1x',
    'effects' => array(
      37 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 915,
          'height' => 305,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_a1d_breakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['article_a1d_breakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => 'article_a1d_breakpoints_theme_flukestrap_desktop_medium_1x',
    'effects' => array(
      38 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 722,
          'height' => 240,
          'strength' => 'medium',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_a1d_breakpoints_theme_flukestrap_mobile_1x.
  $styles['article_a1d_breakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'article_a1d_breakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      40 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 737,
          'height' => 235,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_a1d_breakpoints_theme_flukestrap_tablet_1x.
  $styles['article_a1d_breakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => 'article_a1d_breakpoints_theme_flukestrap_tablet_1x',
    'effects' => array(
      39 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1002,
          'height' => 334,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: digital-asset-article-feat-image.
  $styles['digital-asset-article-feat-image'] = array(
    'label' => 'Digital-asset-article-feat-image',
    'effects' => array(
      1 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 228,
          'height' => 190,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_width_banner_breakpoints_theme_flukestrap_desktop_large_1x.
  $styles['full_width_banner_breakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => 'full_width_banner_breakpoints_theme_flukestrap_desktop_large_1x',
    'effects' => array(
      45 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1944,
          'height' => 290,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: full_width_banner_breakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['full_width_banner_breakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => 'full_width_banner_breakpoints_theme_flukestrap_desktop_medium_1x',
    'effects' => array(
      58 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 290,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: full_width_banner_breakpoints_theme_flukestrap_mobile_1x.
  $styles['full_width_banner_breakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'full_width_banner_breakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      48 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 767,
          'height' => 200,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_width_banner_breakpoints_theme_flukestrap_tablet_1x.
  $styles['full_width_banner_breakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => 'full_width_banner_breakpoints_theme_flukestrap_tablet_1x',
    'effects' => array(
      47 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1032,
          'height' => 200,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_slider_v2_breakpoints_theme_flukestrap_desktop_large_1x.
  $styles['home_slider_v2_breakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => 'home_slider_v2_breakpoints_theme_flukestrap_desktop_large_1x',
    'effects' => array(
      64 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 750,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: home_slider_v2_breakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['home_slider_v2_breakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => 'home_slider_v2_breakpoints_theme_flukestrap_desktop_medium_1x',
    'effects' => array(
      65 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 750,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: home_slider_v2_breakpoints_theme_flukestrap_mobile_1x.
  $styles['home_slider_v2_breakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'home_slider_v2_breakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      67 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 750,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_slider_v2_breakpoints_theme_flukestrap_tablet_1x.
  $styles['home_slider_v2_breakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => 'home_slider_v2_breakpoints_theme_flukestrap_tablet_1x',
    'effects' => array(
      66 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1033,
          'height' => 750,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_slider_breakpoints_theme_flukestrap_desktop_large_1x.
  $styles['homepage_slider_breakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => 'banner_common_breakpoints_theme_flukestrap_desktop_large_1x',
    'effects' => array(
      55 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 290,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: homepage_slider_breakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['homepage_slider_breakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => 'banner_common_breakpoints_theme_flukestrap_desktop_medium_1x',
    'effects' => array(
      56 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 290,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_slider_breakpoints_theme_flukestrap_mobile_1x.
  $styles['homepage_slider_breakpoints_theme_flukestrap_mobile_1x'] = array(
    'label' => 'banner_common_breakpoints_theme_flukestrap_mobile_1x',
    'effects' => array(
      59 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 290,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_slider_breakpoints_theme_flukestrap_tablet_1x.
  $styles['homepage_slider_breakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => 'banner_common_breakpoints_theme_flukestrap_tablet_1x',
    'effects' => array(
      57 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1033,
          'height' => 290,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subcategory_toc_breakpoints_theme_flukestrap_desktop_large_1x.
  $styles['subcategory_toc_breakpoints_theme_flukestrap_desktop_large_1x'] = array(
    'label' => '12-9-nest 4-col 3to2-ratio Desktop-LG 285x190',
    'effects' => array(
      72 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 285,
          'height' => 190,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: subcategory_toc_breakpoints_theme_flukestrap_desktop_medium_1x.
  $styles['subcategory_toc_breakpoints_theme_flukestrap_desktop_medium_1x'] = array(
    'label' => '12-9-nest 4-col 3to2-ratio Desktop-MD 221x147',
    'effects' => array(
      73 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 221,
          'height' => 147,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subcategory_toc_breakpoints_theme_flukestrap_tablet_1x.
  $styles['subcategory_toc_breakpoints_theme_flukestrap_tablet_1x'] = array(
    'label' => '4-col 3to2-ratio Tablet 390x260',
    'effects' => array(
      74 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 390,
          'height' => 260,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
