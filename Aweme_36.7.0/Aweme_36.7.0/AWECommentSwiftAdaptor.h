@interface AWECommentSwiftAdaptor : NSObject <AWECommentSwiftAdaptorProtocol>

- (id)commentGeneralItem:(id)a0;
- (id)commentGlobalInstance;
- (void)commentUpdateDetailBottomInputViewShowing:(BOOL)a0;
- (BOOL)commentPanelThemeIsLight;
- (id)trackingModel;
- (id)obtainTrackerParamsWithEvent:(id)a0 trackerContext:(id)a1 object:(id)a2;
- (BOOL)userFollowAppTheme;
- (Class)commentDataCenterClass;
- (void)commentLog:(long long)a0 message:(id)a1 subModule:(long long)a2;
- (void)commentPushViewController:(id)a0 viewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)commentDetailBottomInputViewIsShowing;
- (void)updatePublishInterval:(long long)a0;
- (void)updatePublishError:(id)a0;
- (BOOL)isSvrError:(id)a0;
- (id)commentSuperResolutionTransformerWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)commentSliceCount;
- (id)commentSLIManager;
- (id)obtainCommentListShowSceneString:(unsigned long long)a0;
- (void)preloadCommentDataIfNeededWithAwemeModel:(id)a0 schema:(id)a1 referString:(id)a2;
- (id)init;
- (id)commentStorage;

@end
