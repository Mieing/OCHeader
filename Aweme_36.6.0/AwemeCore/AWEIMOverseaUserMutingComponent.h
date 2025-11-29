@class NSString;

@interface AWEIMOverseaUserMutingComponent : AWEIMComponentBase <AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (nonatomic) BOOL shouldMute;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)p_viewDidAppear;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)__hideInputVC;

@end
