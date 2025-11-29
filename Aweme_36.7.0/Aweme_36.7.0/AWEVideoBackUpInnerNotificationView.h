@class NSString, DUXInAppNotificationMainContentView, AWEVideoBackUpInnerNotificationConfig;
@protocol AWEInnerNotificationContentOperator;

@interface AWEVideoBackUpInnerNotificationView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) DUXInAppNotificationMainContentView *mainView;
@property (retain, nonatomic) AWEVideoBackUpInnerNotificationConfig *configModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (void)customTransition:(long long)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isContainerBackgroundClear;
- (void)dismissToEdit;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (id)view;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateWithModel:(id)a0;

@end
