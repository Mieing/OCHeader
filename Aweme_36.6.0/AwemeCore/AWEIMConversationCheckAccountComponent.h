@interface AWEIMConversationCheckAccountComponent : AWEIMComponentBase

@property (nonatomic) BOOL enableBelongErrorReport;
@property (nonatomic) BOOL firstFrameOpt;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)p_checkConversationWithAppUid:(id)a0 context:(id)a1;
- (void)p_checkMessageWithAppUid:(id)a0 context:(id)a1;

@end
