@interface AWEFeedTemplateAnchorEcomMultiProductConfig : AWEFeedTemplateAnchorBaseConfig

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)trackerForTemplateAnchorShow;
- (void)trackerForTemplateAnchorClick;
- (id)videoPlayParams;
- (id)contextParamsFromSchemaParams:(id)a0;
- (id)multiProductAnchorCommonParamsWithSchemaParams:(id)a0;
- (id)handleEcomSceneIDsWithParams:(id)a0;
- (id)multiProductAnchorTrackerParamsWithSchemaParams:(id)a0;
- (id)multiProductAnchorBTMParams;

@end
