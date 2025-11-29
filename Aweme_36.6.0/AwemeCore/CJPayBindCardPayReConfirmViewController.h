@class CJPayBindCardPayReConfirmViewModel, CJPayBindCardPayReConfirmView;

@interface CJPayBindCardPayReConfirmViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPayBindCardPayReConfirmViewModel *model;
@property (retain, nonatomic) CJPayBindCardPayReConfirmView *confirmView;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ backCompletionBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackBlock;

- (void)p_closeButtonTapped;
- (id)p_commonTrackParams;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_trackBtmWithBTMEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (void)p_onConfirmPayAction;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
