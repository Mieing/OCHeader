@interface AWETemplateMixOrPlayletViewModel : AWETemplateBaseViewModel

- (void)viewController_viewDidAppear;
- (id)commonParams;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (id)paramsForTemplateViewTransfer;
- (id)paramsForTemplateViewShow;
- (id)paramsForTemplateViewClick;
- (void)playletRequestPreload;
- (void)trackEntranceShowOrClickEvent:(id)a0;

@end
