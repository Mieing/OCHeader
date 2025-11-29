@interface IESIMGroupConversationDissovleBlockPopupComponent : AWEIMComponentBase

@property (nonatomic) BOOL isPersonRemoveorDissolveFirstAppear;
@property (nonatomic) BOOL firstFrameOpt;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)p_viewDidAppear;
- (void)p_viewDidLoad;
- (void)showRemoveDissovleBlockStringCompnent:(id)a0;
- (id)getDissolveReasonByGroupType;
- (void)trackEvent:(id)a0;

@end
