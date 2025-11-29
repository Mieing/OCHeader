@interface AWECommentMainSwiftImpl.CommentMainService : NSObject <AWECommentMainService>

- (BOOL)isPersonalRecommendSwitchOn;
- (id)currentLoginUser;
- (void)postLynxEvent:(id)a0 params:(id)a1;
- (id)longPressPanelBigFont:(BOOL)a0;
- (struct CGSize { double x0; double x1; })longPressPanelImageSize:(BOOL)a0;
- (double)longPressCellHeight;
- (void)trackReportCommentWithFirstComment:(id)a0 pageType:(id)a1 context:(id)a2;
- (id)feedTemplateAnchorDataCheckFailReason:(id)a0;
- (id)mediaMainInteractionViewControllerAdaptor;
- (id)videoPlayerViewController:(id)a0;
- (id)tabTemplateLynxViewControllerContainer;
- (id)lynxPlayInteractionViewController;
- (BOOL)isTeenModeDouyinEnable;
- (BOOL)basicModeStatus;
- (void)showQuitBasicModeAlert;
- (void)postReplaceVideosNotificationIfNeed;
- (double)tabBarOverlapHeight;
- (id)currentUserSettingsModel;
- (id)init;
- (BOOL)isLogin;

@end
