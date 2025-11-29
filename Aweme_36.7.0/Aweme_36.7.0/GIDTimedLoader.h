@class GIDActivityIndicatorViewController, UIViewController, NSTimer;

@interface GIDTimedLoader : NSObject

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) GIDActivityIndicatorViewController *loadingViewController;
@property (retain, nonatomic) NSTimer *loadingTimer;
@property (nonatomic) double loadingTimeStamp;
@property (nonatomic) unsigned long long animationStatus;

- (void)stopTimingWithCompletion:(id /* block */)a0;
- (void)presentLoadingViewController;
- (unsigned long long)remainingDurationToAnimate;
- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)a0;
- (void)startTiming;

@end
