@class CJPayDyContentPopUpModel, CJPayButton, UILabel, UIView;

@interface CJPayDyContentPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayButton *mainOperation;
@property (retain, nonatomic) CJPayDyContentPopUpModel *model;
@property (retain, nonatomic) CJPayButton *closeBtn;
@property (retain, nonatomic) CJPayButton *topRightButton;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isOuterContentView;

- (void)p_closePage;
- (id)initWithPopUpModel:(id)a0;
- (void)showOnTopVC:(id)a0;
- (void)p_clickMainOperation;
- (void)p_clicktopRightButton;
- (void).cxx_destruct;
- (void)setupUI;

@end
