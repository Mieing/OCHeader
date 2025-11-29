@class NSString, AWEMultiAccountInnerNotificationConfig, AWEInnerNotificationRequest, DUXInAppNotificationMainContentView;
@protocol AWEInnerNotificationContentOperator;

@interface AWEMultiAccountInnerNotificationView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) DUXInAppNotificationMainContentView *mainView;
@property (retain, nonatomic) AWEMultiAccountInnerNotificationConfig *configModel;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewWillDisappearWithReason:(long long)a0;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (void)customTransition:(long long)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isContainerBackgroundClear;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (id)view;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateWithModel:(id)a0;

@end
