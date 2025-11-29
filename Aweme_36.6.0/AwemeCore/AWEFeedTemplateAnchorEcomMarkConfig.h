@interface AWEFeedTemplateAnchorEcomMarkConfig : AWEFeedTemplateAnchorBaseConfig

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)trackerForTemplateAnchorShow;
- (void)trackerForTemplateAnchorClick;
- (id)markAnchorCommonParamsWithSchemaParams:(id)a0;
- (id)markAnchorTrackerParamsWithSchemaParams:(id)a0;
- (id)contextParamsFromSchemaParams:(id)a0;
- (id)markAnchorBTMParams;
- (id)getSpuIDFromSchema;

@end
