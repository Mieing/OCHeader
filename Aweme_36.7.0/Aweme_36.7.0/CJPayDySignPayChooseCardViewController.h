@class CJPaySignPayChoosePayMethodManager, NSArray, NSString, UIScrollView, UIView, UILabel;

@interface CJPayDySignPayChooseCardViewController : CJPayHalfPageBaseViewController

@property (weak, nonatomic) CJPaySignPayChoosePayMethodManager *manager;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UIView *warningContentView;
@property (copy, nonatomic) NSArray *signPayChoosePayMethodViewArray;
@property (copy, nonatomic) NSArray *payMethodsGroupModelArray;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) NSString *warningText;
@property (nonatomic) double height;

- (void)p_postTrack;
- (void)p_updateWarningArea:(id)a0;
- (id)p_buildSignPayChoosePayMethodModel;
- (void)didChangeSelectedSignPayMethod:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (double)containerHeight;

@end
