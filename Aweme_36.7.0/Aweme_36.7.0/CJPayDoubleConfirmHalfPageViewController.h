@class UIImageView, CJPayStandardButton, UILabel, UIView, CJPayDoubleConfirmPageInfo;

@interface CJPayDoubleConfirmHalfPageViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) CJPayStandardButton *backBtn;
@property (retain, nonatomic) CJPayStandardButton *confirmBtn;
@property (retain, nonatomic) CJPayDoubleConfirmPageInfo *doubleConfirmPageInfo;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (BOOL)supportStdNaviBar;
- (id)initWithDoubleConfirmInfo:(id)a0;
- (void)p_clickBackAction;
- (void)p_clickConfirmAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)containerHeight;

@end
