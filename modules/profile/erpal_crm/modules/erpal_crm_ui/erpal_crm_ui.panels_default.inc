<?php
/**
 * @file
 * Bulk export of panels_default objects generated by Bulk export module.
 */

/**
 * Implements hook_default_panels_mini().
 */
function erpal_crm_ui_default_panels_mini() {
  $minis = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'erpal_sales_process_main_tab_con';
  $mini->category = '';
  $mini->admin_title = 'ERPAL sales process main tab content';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'CRM Core Activity',
      'keyword' => 'crm_core_activity',
      'name' => 'entity:crm_core_activity',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sales Process';
  $display->uuid = 'cd86519f-9287-4330-88dd-71b5717a7a58';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9ed7d1b4-e232-44e0-92e0-56120fa8697f';
  $pane->panel = 'left';
  $pane->type = 'entity_view';
  $pane->subtype = 'crm_core_activity';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'requiredcontext_entity:crm_core_activity_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ed7d1b4-e232-44e0-92e0-56120fa8697f';
  $display->content['new-9ed7d1b4-e232-44e0-92e0-56120fa8697f'] = $pane;
  $display->panels['left'][0] = 'new-9ed7d1b4-e232-44e0-92e0-56120fa8697f';
  $pane = new stdClass();
  $pane->pid = 'new-36ddfe75-c4ee-430e-ae02-4a1a3215dab2';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_crm_activities-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
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
  $pane->uuid = '36ddfe75-c4ee-430e-ae02-4a1a3215dab2';
  $display->content['new-36ddfe75-c4ee-430e-ae02-4a1a3215dab2'] = $pane;
  $display->panels['right'][0] = 'new-36ddfe75-c4ee-430e-ae02-4a1a3215dab2';
  $pane = new stdClass();
  $pane->pid = 'new-4d1cbadd-8464-436b-9766-dbc3704bd60e';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_crm_activities-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4d1cbadd-8464-436b-9766-dbc3704bd60e';
  $display->content['new-4d1cbadd-8464-436b-9766-dbc3704bd60e'] = $pane;
  $display->panels['right'][1] = 'new-4d1cbadd-8464-436b-9766-dbc3704bd60e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9ed7d1b4-e232-44e0-92e0-56120fa8697f';
  $mini->display = $display;
  $minis['erpal_sales_process_main_tab_con'] = $mini;


  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'erpal_sales_process_merged_conta';
  $mini->category = '';
  $mini->admin_title = 'ERPAL sales process merged contacts tab';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'CRM Core Activity',
      'keyword' => 'crm_core_activity',
      'name' => 'entity:crm_core_activity',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Customer & Contacts';
  $display->uuid = '1da57ae3-9b5d-4114-936c-a0e94b8face3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ff1cd22a-cc6e-4f44-a87f-f1f45cd6906d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_crm_contacts-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
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
  $pane->uuid = 'ff1cd22a-cc6e-4f44-a87f-f1f45cd6906d';
  $display->content['new-ff1cd22a-cc6e-4f44-a87f-f1f45cd6906d'] = $pane;
  $display->panels['middle'][0] = 'new-ff1cd22a-cc6e-4f44-a87f-f1f45cd6906d';
  $pane = new stdClass();
  $pane->pid = 'new-37db9833-2352-4357-a91e-b5e347ad0f38';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_crm_contacts-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '37db9833-2352-4357-a91e-b5e347ad0f38';
  $display->content['new-37db9833-2352-4357-a91e-b5e347ad0f38'] = $pane;
  $display->panels['middle'][1] = 'new-37db9833-2352-4357-a91e-b5e347ad0f38';
  $pane = new stdClass();
  $pane->pid = 'new-cef1f76e-9440-4695-9526-d8e33239506f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_crm_contacts-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cef1f76e-9440-4695-9526-d8e33239506f';
  $display->content['new-cef1f76e-9440-4695-9526-d8e33239506f'] = $pane;
  $display->panels['middle'][2] = 'new-cef1f76e-9440-4695-9526-d8e33239506f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ff1cd22a-cc6e-4f44-a87f-f1f45cd6906d';
  $mini->display = $display;
  $minis['erpal_sales_process_merged_conta'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'erpal_sales_process_merged_quote';
  $mini->category = '';
  $mini->admin_title = 'ERPAL sales process merged quotes, orders and invoices tab';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'CRM Core Activity',
      'keyword' => 'crm_core_activity',
      'name' => 'entity:crm_core_activity',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Quotes, Orders & Invoices';
  $display->uuid = 'bc65b33d-24b5-421f-aa1a-988f86f229ad';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c5193eb-6de1-401f-93d5-57527e4683ee';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_quote-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
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
  $pane->uuid = '1c5193eb-6de1-401f-93d5-57527e4683ee';
  $display->content['new-1c5193eb-6de1-401f-93d5-57527e4683ee'] = $pane;
  $display->panels['center'][0] = 'new-1c5193eb-6de1-401f-93d5-57527e4683ee';
  $pane = new stdClass();
  $pane->pid = 'new-4bff55d0-359e-4844-8e36-1868e4c66434';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_order-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4bff55d0-359e-4844-8e36-1868e4c66434';
  $display->content['new-4bff55d0-359e-4844-8e36-1868e4c66434'] = $pane;
  $display->panels['center'][1] = 'new-4bff55d0-359e-4844-8e36-1868e4c66434';
  $pane = new stdClass();
  $pane->pid = 'new-2f52809b-06db-4c68-be8b-008dc05365c3';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'erpal_invoice-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:crm_core_activity_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2f52809b-06db-4c68-be8b-008dc05365c3';
  $display->content['new-2f52809b-06db-4c68-be8b-008dc05365c3'] = $pane;
  $display->panels['center'][2] = 'new-2f52809b-06db-4c68-be8b-008dc05365c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1c5193eb-6de1-401f-93d5-57527e4683ee';
  $mini->display = $display;
  $minis['erpal_sales_process_merged_quote'] = $mini;

  return $minis;
}
