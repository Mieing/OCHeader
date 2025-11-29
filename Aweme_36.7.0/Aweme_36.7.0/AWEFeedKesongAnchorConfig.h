@interface AWEFeedKesongAnchorConfig : AWEFeedTemplateAnchorBaseConfig

- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (id)handleSchemaIfNeeded:(id)a0;
- (BOOL)enableAnchorStayTimeTrackOptForKeSong;
- (void)trackParse:(double)a0;

@end
