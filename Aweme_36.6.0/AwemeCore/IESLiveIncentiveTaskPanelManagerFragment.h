@class IESLiveIncentiveTaskPanelManagerMonitor, NSString, IESLivePanelInfo, IESLiveIncentiveTaskPanelActivityLimitHandler, IESLiveIncentiveTaskPanelDailyLimitHandler, NSMutableArray;

@interface IESLiveIncentiveTaskPanelManagerFragment : IESLiveRoomComponent <IESLiveIncentiveTaskPanelManagerRouter, IESHYControllerDelegate>

@property (retain, nonatomic) IESLivePanelInfo *currentShowingPanelInfo;
@property (retain, nonatomic) NSMutableArray *panelInfoQueue;
@property (retain, nonatomic) IESLiveIncentiveTaskPanelDailyLimitHandler *dailyLimitHandler;
@property (retain, nonatomic) IESLiveIncentiveTaskPanelActivityLimitHandler *activityLimitHandler;
@property (retain, nonatomic) IESLiveIncentiveTaskPanelManagerMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentDestroy;
- (void)iesHYControllerWillDismiss:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)addPanelWithSchema:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)panelDidShow:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (void)dequeue;

@end
