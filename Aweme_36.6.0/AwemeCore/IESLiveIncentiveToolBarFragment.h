@class IESLiveIncentiveToolBarViewModel, IESLiveIncentiveToolBarView, NSString;
@protocol IESLiveIncentiveTaskTimerService;

@interface IESLiveIncentiveToolBarFragment : IESLiveRoomComponent <IESLiveIncentiveTaskTimerAction, IESLiveToolbarComponentHandler, IESLiveIncentiveToolBarDelegate>

@property (retain, nonatomic) id<IESLiveIncentiveTaskTimerService> incentiveTaskTimer;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) IESLiveIncentiveToolBarView *toolbarView;
@property (retain, nonatomic) IESLiveIncentiveToolBarViewModel *toolbarViewModel;
@property (nonatomic) BOOL manualToolbarRemind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)giftTreasureBoxWillShow;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (double)getRestTime;
- (void)willExitRoom;
- (void)boxRemind;
- (void)boxCountDownWithDuration:(double)a0 progress:(double)a1;
- (void)noTreasureBox;
- (id)incentiveTrackParams;
- (void)taskPanelWillShow;
- (void).cxx_destruct;

@end
