@class NSString, NSArray, IESLiveVideoAdjustHelper, IESLiveVideoAdjustContainerView, IESLiveVideoAdjustEffectHandler, IESLiveVideoAdjustViewModel, IESLiveVideoAdjustVEHandler;

@interface IESLiveGuideVideoAdjustFragment : IESLiveGuideComponent <IESLiveAnchorVideoAdjustService, IESLiveVideoAdjustViewModelDelegate, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) IESLiveVideoAdjustViewModel *videoAdjustViewModel;
@property (retain, nonatomic) IESLiveVideoAdjustContainerView *videoAdjustView;
@property (retain, nonatomic) IESLiveVideoAdjustHelper *videoAdjustHelper;
@property (retain, nonatomic) IESLiveVideoAdjustEffectHandler *effectHandler;
@property (retain, nonatomic) IESLiveVideoAdjustVEHandler *VEHandler;
@property (retain, nonatomic) NSArray *categoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)appendCreateAnchorBusinessParams:(id)a0 completion:(id /* block */)a1;
- (void)showVideoAdjustView;
- (void)setupVideoAdjustHelper;
- (void)setupVideoAdjustViewModel;
- (void)setupAdjustContainerView;
- (void)loadResourceIfNeed;
- (void)handleBottomPanelDisplay:(BOOL)a0;
- (void).cxx_destruct;

@end
