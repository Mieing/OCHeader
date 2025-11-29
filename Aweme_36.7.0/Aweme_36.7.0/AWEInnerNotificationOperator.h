@class UIWindow, AWEInnerNotificationContainerView, NSString, RxPromise, AWEInnerNotificationRequest, AWEInnerNotificationCoordinator;
@protocol AWEInnerNotificationOperatorDelegate;

@interface AWEInnerNotificationOperator : NSObject <AWEInnerNotificationCoordinatorDelegate, AWEInnerNotificationContentOperator>

@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) AWEInnerNotificationContainerView *notificationView;
@property (readonly, nonatomic) AWEInnerNotificationCoordinator *coordinator;
@property (retain, nonatomic) RxPromise *dismissPromise;
@property (readonly, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationOperatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } notificationViewTransform;
@property (nonatomic) double notificationViewAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } notifictionViewFrame;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)dismissNotificationView:(BOOL)a0;
- (void)resetDismissTimer;
- (void)notifyLayoutChange;
- (id)dismissNotificationView;
- (id)dismissNotificationViewReason:(long long)a0;
- (id)dismissNotificationWithAnimated:(BOOL)a0 reason:(long long)a1;
- (id)showNotificationWithCallback:(id /* block */)a0;
- (void)pauseDismissTimer;
- (id)moveNotificationByOffset:(double)a0 withAnimated:(BOOL)a1;
- (void)resumeDismissTimer;
- (void)forceDismissByOtherNotification;
- (void)__notificationViewAdaptWithOrientation;
- (id)__showNotification;
- (id)__dismissNotificationWithAnimated:(BOOL)a0 reason:(long long)a1;
- (id)__moveNotificationByOffset:(double)a0 withAnimated:(BOOL)a1;
- (void)__notificationViewAppearOrDisappear;
- (double)pushViewTopInset;
- (double)pushViewWidth;
- (void).cxx_destruct;
- (id)init;
- (id)showNotification;
- (id)__window;

@end
