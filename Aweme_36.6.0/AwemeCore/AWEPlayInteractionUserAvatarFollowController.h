@class NSString;

@interface AWEPlayInteractionUserAvatarFollowController : AWEBaseController <AWEPlayInteractionUserAvatarLifeCycleProtocol, AWEPlayInteractionUserAvatarFollowProtocol>

@property (nonatomic) BOOL needPlayUnFollowAnimation;
@property (nonatomic) BOOL isChangeFollowStatusToTrack;
@property (nonatomic) BOOL isFollowAnimationFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;

- (void)dealloc;
- (void)updateFollowStatus;
- (id)userAvatarView;
- (void)playUnFollowAnimation;
- (void)followStatusChanged:(id)a0;
- (void)playFollowAnimation;
- (id)aAWEPlayInteractionAdapter;
- (void)controllerViewDidLoad;
- (BOOL)canFollow;
- (void)initController;
- (void)controllerViewDidLayout;
- (void)controllerStartConfigAvatarView:(id)a0;
- (void)onUnFollowViewClicked:(id)a0;
- (void)updateFollowStatusByUserAction:(BOOL)a0;
- (void)switchFollowButtonVisibility:(BOOL)a0;
- (void)onFollowViewClicked:(id)a0;
- (id)model;
- (id)viewModel;

@end
