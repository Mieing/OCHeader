@class UIImageView, UILabel, CJPayCommonRecIconInfo;

@interface CJPayCommonRecDetailViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayCommonRecIconInfo *recIconInfo;

- (void)useCloseBackBtn;
- (BOOL)supportStdNaviBar;
- (void)p_updateUI;
- (id)p_createCloseBarAction;
- (id)initWithRecInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)containerHeight;

@end
