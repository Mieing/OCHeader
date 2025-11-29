@class HTSEventContext, NSString, IESLiveTreasureBoxToolBarView, IESLiveTreasureBoxTaskTimer, IESLiveTreasureBoxToolbarViewModel;

@interface IESLiveTreasureBoxToolBarController : NSObject <IESLiveToolbarComponentHandler, IESLiveTreasureBoxToolBarDelegate, IESLiveTreasureBoxTaskTimerAction>

@property (retain, nonatomic) IESLiveTreasureBoxToolBarView *toolbarView;
@property (retain, nonatomic) IESLiveTreasureBoxToolbarViewModel *toolbarViewModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveTreasureBoxTaskTimer *boxTaskTimer;
@property (nonatomic) BOOL manualToolbarRemind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (double)getRestTime;
- (void)willExitRoom;
- (void)boxRemind;
- (void)boxCountDownWithDuration:(double)a0 progress:(double)a1;
- (void)noTreasureBox;
- (void)taskPanelWillShow;
- (id)initWithboxTimer:(id)a0 trackContext:(id)a1;
- (id)treasureBoxTrackParams;
- (void).cxx_destruct;

@end
