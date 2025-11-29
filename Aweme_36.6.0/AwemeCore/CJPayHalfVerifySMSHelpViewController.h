@class UILabel, CJPayVerifySMSHelpModel;

@interface CJPayHalfVerifySMSHelpViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayVerifySMSHelpModel *helpModel;
@property (nonatomic) double designContentHeight;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)containerHeight;

@end
