@class UILabel, NSTimer, UIView;

@interface AWEVideoPlayControlTipsController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSTimer *timer;

- (void)setHide:(BOOL)a0;
- (void)bindEvent;
- (void)updateTipsViewLayOut;
- (void)showContinuePlayReminderView:(id)a0 withCompletion:(id /* block */)a1;
- (void)showMovieTicketPaymentInfoWithModel:(id)a0;
- (void)showReminderView:(id)a0 duration:(double)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
