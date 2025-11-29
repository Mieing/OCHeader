@class MMTimer, MMNotificationView;
@protocol MMNotificationViewControllerDelegate;

@interface MMNotificationViewController : MMWindowViewController

@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) MMNotificationView *notificationView;
@property (weak, nonatomic) id<MMNotificationViewControllerDelegate> delegate;
@property (nonatomic) double autoHideDuration;

- (id)initWithNotificationView:(id)a0;
- (void)resetAutoHideTimer;
- (void)showNotification;
- (void)hideNotification;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)show;
- (void)hide;
- (void)layoutUI;
- (void)handlePanGesture:(id)a0;
- (void).cxx_destruct;

@end
