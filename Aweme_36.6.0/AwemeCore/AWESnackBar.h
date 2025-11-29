@class NSTimer, AWESnackBarView, AWESnackBarViewContext;

@interface AWESnackBar : NSObject

@property (retain, nonatomic) AWESnackBarView *snackBarView;
@property (retain, nonatomic) NSTimer *snackBarTimer;
@property (retain, nonatomic) AWESnackBarViewContext *currentShowingContext;
@property (nonatomic) BOOL isShowing;

+ (double)snackBarBottomPadding:(BOOL)a0;
+ (double)snackBarLeftPadding;
+ (double)snackBarHeight;
+ (void)dismissSnackBar;
+ (void)snackBarWithContext:(id)a0;
+ (id)p_createTimerWithInterval:(double)a0;
+ (void)snackBarWithMessage:(id)a0;
+ (id)sharedInstance;

- (void)p_handleAppWillResignActiveNotification;
- (void)createTimerWithInterval:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
