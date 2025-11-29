@class AWEDeepLinkToken, NSDictionary, NSURL, AWEDLMSession, UIViewController;

@interface AWEDPUndertakeResultCheckStep : AWEWorkflowStep

@property (retain, nonatomic) NSURL *openUrl;
@property (weak, nonatomic) AWEDLMSession *linkSession;
@property (weak, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) AWEDeepLinkToken *token;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (void)_startUndertakeResultListen:(id)a0;
- (BOOL)_checkUndertakeSuccessForFeedScene;
- (void)_handleUndertakeResultCheck:(BOOL)a0;
- (void)_handleSessionTimeoutNotification:(id)a0;
- (void)_handleVideoInsertNotification:(id)a0;
- (void)_handleStayTime;
- (void)removeNotificationsObserver;
- (void).cxx_destruct;
- (void)dealloc;

@end
