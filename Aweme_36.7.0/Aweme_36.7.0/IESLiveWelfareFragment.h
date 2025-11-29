@class IESLiveWelfareViewModel, NSString, IESLiveActivityContainerCardView;

@interface IESLiveWelfareFragment : IESLiveRoomComponent <IESLiveActivityContainerCardViewDelegate, IESLiveToolBarCoordinaryAnimationAction>

@property (retain, nonatomic) IESLiveWelfareViewModel *viewModel;
@property (retain, nonatomic) IESLiveActivityContainerCardView *cardView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isPreLive;
@property (nonatomic) long long animationTriggerTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)bindViewModel;
- (unsigned long long)animationTriggerState;
- (void)willShowAnimationCallBack;
- (void)showAnimationCallBack;
- (void)willHideAnimationCallBack;
- (void)showWelfareCard:(id)a0;
- (void)destroyWelfareCard;
- (void)showFrequenceActionSheet;
- (void)showRemoveAlert:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)triggerAnimation;

@end
