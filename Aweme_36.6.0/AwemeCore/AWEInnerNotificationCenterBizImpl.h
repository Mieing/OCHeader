@class NSString, AWEInnerPushExitController, NSMutableArray, AWEInnerPushDidReverseExpConfig;

@interface AWEInnerNotificationCenterBizImpl : NSObject <AWEInnerNotificationCenterBizProtocol>

@property (retain, nonatomic) AWEInnerPushExitController *exitController;
@property (retain, nonatomic) AWEInnerPushDidReverseExpConfig *reverseExpConfig;
@property (retain, nonatomic) NSMutableArray *pendingNotificationsByAd;
@property (nonatomic) BOOL adHasDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addObserver;
- (void)didShowNotificationWithRequest:(id)a0;
- (id)controlAddNotificationRequest:(id)a0;
- (void)notificationOperatorDidDismiss:(id)a0 reason:(long long)a1;
- (void)__setupControlInfo;
- (void)retryAddNotificationRequest;
- (BOOL)canShowByNewReversExpr:(id)a0;
- (void)resetPriorityOfRequest:(id)a0;
- (BOOL)canShowByInnerPushGroupReverseExpr:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
