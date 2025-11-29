@interface AWEFeedECWindowAnchorConfig : AWEFeedTemplateAnchorBaseConfig

@property (nonatomic) BOOL shouldTrackDetailShowWhenAnchorViewShow;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)didShowDoubleLineStyleAnchor;
- (void)trackShowWindowAnchor;
- (void)trackShowWindowAnchorDetail;
- (void)handleAnchorViewClicked;
- (void)trackClickWindowAnchor;
- (id)hostViewController;

@end
