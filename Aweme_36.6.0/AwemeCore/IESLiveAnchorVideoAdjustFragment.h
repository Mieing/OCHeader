@class IESLiveVideoAdjustVEHandler, NSString, HTSLiveToolbarItem, IESLiveVideoAdjustContainerView, IESLiveVideoAdjustHelper, IESLiveVideoAdjustViewModel, IESLiveVideoAdjustEffectHandler;

@interface IESLiveAnchorVideoAdjustFragment : IESLiveRoomComponent <IESLiveAnchorVideoAdjustService, IESLiveVideoAdjustViewModelDelegate>

@property (retain, nonatomic) HTSLiveToolbarItem *videoAdjustItem;
@property (retain, nonatomic) IESLiveVideoAdjustViewModel *videoAdjustViewModel;
@property (retain, nonatomic) IESLiveVideoAdjustContainerView *videoAdjustView;
@property (retain, nonatomic) IESLiveVideoAdjustHelper *videoAdjustHelper;
@property (retain, nonatomic) IESLiveVideoAdjustEffectHandler *effectHandler;
@property (retain, nonatomic) IESLiveVideoAdjustVEHandler *VEHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)setupToolbarItem;
- (void)showVideoAdjustView;
- (void)setupVideoAdjustHelper;
- (void)setupVideoAdjustViewModel;
- (void)setupAdjustContainerView;
- (void)loadResourceIfNeed;
- (void).cxx_destruct;

@end
