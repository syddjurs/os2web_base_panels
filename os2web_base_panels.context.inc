<?php
/**
 * @file
 * os2web_base_panels.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_base_panels_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_base_panels_business_page';
  $context->description = 'OS2web - Erhverv sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/5' => 'taxonomy/term/5',
      ),
    ),
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'local_plan' => 'local_plan',
        'referat' => 'referat',
        'sektionsside' => 'sektionsside',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-os2web_base_panels_view_sitestru-block_3' => array(
          'module' => 'views',
          'delta' => 'os2web_base_panels_view_sitestru-block_3',
          'region' => 'sidebar_first',
          'weight' => '-74',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '16',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2web - Erhverv sider');
  $export['os2web_base_panels_business_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_base_panels_citizen_page';
  $context->description = 'OS2web - Borger sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/4' => 'taxonomy/term/4',
      ),
    ),
    'node' => array(
      'values' => array(
        'os2web_base_os2web_base_contentpage' => 'os2web_base_os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-os2web_base_panels_view_sitestru-block_2' => array(
          'module' => 'views',
          'delta' => 'os2web_base_panels_view_sitestru-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => 2,
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2web - Borger sider');
  $export['os2web_base_panels_citizen_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_base_panels_context';
  $context->description = '';
  $context->tag = 'OS2Web - Generelt';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-os2web_base_panels_mini_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'os2web_base_panels_mini_footer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2Web - Generelt');
  $export['os2web_base_panels_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_base_panels_leisures';
  $context->description = 'OS2web - Planer og fritid sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/6' => 'taxonomy/term/6',
      ),
    ),
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'local_plan' => 'local_plan',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-os2web_base_panels_view_sitestru-block_4' => array(
          'module' => 'views',
          'delta' => 'os2web_base_panels_view_sitestru-block_4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => 3,
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2web - Planer og fritid sider');
  $export['os2web_base_panels_leisures'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_base_panels_portal';
  $context->description = 'Portalforsider';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'borger' => 'borger',
        'erhverv' => 'erhverv',
        'politik-og-planer' => 'politik-og-planer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-os2web_base_panels_view_sitestru-block_1' => array(
          'module' => 'views',
          'delta' => 'os2web_base_panels_view_sitestru-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => 11,
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'portalforside',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Portalforsider');
  $export['os2web_base_panels_portal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_base_panels_right_column';
  $context->description = 'Globale højre blokke';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_gallery' => 'os2web_base_gallery',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'news' => 'news',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-redaktoer_info-block' => array(
          'module' => 'views',
          'delta' => 'redaktoer_info-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'delta_blocks-action-links' => array(
          'module' => 'delta_blocks',
          'delta' => 'action-links',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => 12,
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views-selvbetjening-block_6' => array(
          'module' => 'views',
          'delta' => 'selvbetjening-block_6',
          'region' => 'sidebar_second',
          'weight' => '-69',
        ),
        'views-kontaktblok-block' => array(
          'module' => 'views',
          'delta' => 'kontaktblok-block',
          'region' => 'sidebar_second',
          'weight' => '-68',
        ),
        'views-spot_view-block_1' => array(
          'module' => 'views',
          'delta' => 'spot_view-block_1',
          'region' => 'sidebar_second',
          'weight' => '-67',
        ),
        'views-kle_lonks_boks-kle_links_boks' => array(
          'module' => 'views',
          'delta' => 'kle_lonks_boks-kle_links_boks',
          'region' => 'sidebar_second',
          'weight' => '-66',
        ),
        'menu-menu-erhverv-genveje' => array(
          'module' => 'menu',
          'delta' => 'menu-erhverv-genveje',
          'region' => 'header_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Globale højre blokke');
  $export['os2web_base_panels_right_column'] = $context;

  return $export;
}
