@interface AWEIMMessageListInfoOtherComponent : AWEIMComponentBase

@property (nonatomic) BOOL firstFrameOpt;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)p_fetchConversationInfoOtherData;
- (id)p_routerParamsForInfoOther;

@end
