@class MMTimer, NSString;

@interface MMFinderLiveAlertView : WCUIAlertView

@property (nonatomic) BOOL viewDismissCountDownRegistered;
@property (nonatomic) double time;
@property (copy, nonatomic) id /* block */ autoDismissBlock;
@property (nonatomic) BOOL displayCountDownInTitleTag;
@property (retain, nonatomic) MMTimer *countDownTimer;
@property (copy, nonatomic) NSString *rawViewTitle;

- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)showWithTimeDuration:(double)a0 autoDismissBlock:(id /* block */)a1 displayCountDownInTitle:(BOOL)a2;
- (void)cancelAutoDismiss;
- (void)autoDismiss;
- (void)updateCountTimer;
- (void).cxx_destruct;

@end
