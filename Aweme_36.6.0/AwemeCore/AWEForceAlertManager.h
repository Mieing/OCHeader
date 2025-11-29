@class NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol AWEForceAlertExecuteDelegate;

@interface AWEForceAlertManager : NSObject

@property (retain, nonatomic) NSMutableSet *triggeredEventIDs;
@property (retain, nonatomic) NSMutableArray *allAlerts;
@property (retain, nonatomic) NSMutableDictionary *showedAlertsMap;
@property (weak, nonatomic) id<AWEForceAlertExecuteDelegate> executeDelegate;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)lifeCycleDelegate;
- (BOOL)isAlertOfIdExist:(id)a0;
- (void)handleWillTerminateNotification:(id)a0;
- (BOOL)hasShownAlertWithId:(id)a0;
- (BOOL)hasTriggeredEvent:(id)a0;
- (id)currentShowingAlertIDs;
- (id)getCurrentShowingAlerts;
- (BOOL)hasShownAnyAlert;
- (void)logAlertShowing;
- (id)getContainerInfoWithAlert:(id)a0 eventItem:(id)a1;
- (void)willShowAlert:(id)a0;
- (void)triggerForceAlert:(id)a0 forEventItem:(id)a1 completion:(id /* block */)a2;
- (void)attachAlert:(id)a0 toLifeCycle:(id)a1;
- (BOOL)hasForceAlertShowing;
- (BOOL)isAlertOfIdExist:(id)a0 withEventID:(id)a1;
- (id /* block */)generateShowCallbackWithAlert:(id)a0;
- (id /* block */)generateCloseCallbackWithAlert:(id)a0;
- (void)trackAlertShow:(id)a0 extraParams:(id)a1;
- (void)p_onAlertShowCallback:(id)a0 alertResponder:(id)a1;
- (void)p_onAlertCloseCallback:(id)a0 isCanceled:(BOOL)a1;
- (void)willRemoveAlert:(id)a0 isCanceled:(BOOL)a1;
- (void)postAlertEventEnded:(id)a0;
- (BOOL)enableTrackShow;
- (void).cxx_destruct;

@end
