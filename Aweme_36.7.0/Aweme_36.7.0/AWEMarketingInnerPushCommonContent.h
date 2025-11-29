@class NSString, NSDictionary, AWEInnerPushControlModel, AWEMarketingInnerPushCommonView, AWEInnerNotificationRequest, NSNumber;
@protocol AWEInnerNotificationContentOperator;

@interface AWEMarketingInnerPushCommonContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (retain, nonatomic) AWEMarketingInnerPushCommonView *currentView;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *pushType;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;
@property (copy, nonatomic) NSDictionary *frontierPayLoad;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewWillDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;

@end
