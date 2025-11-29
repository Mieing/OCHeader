@interface AWETemplateTagsJXPanelPreloadBaseStrategy : AWETemplateTagsCommonStrategy

- (void)viewController_willDisplay;
- (void)tagDidShow;
- (void)setTagShowFlagBasedOnBusinessID;
- (void)trackDouyinSelectBrandShow;
- (void)didInitialize;

@end
