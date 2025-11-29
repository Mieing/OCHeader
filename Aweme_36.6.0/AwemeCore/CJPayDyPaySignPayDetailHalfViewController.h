@class CJPayPayAndXShowInfoModel, UIImageView, UILabel, UIView, CJPayDefaultChannelShowConfig;

@interface CJPayDyPaySignPayDetailHalfViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *voucherView;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (nonatomic) BOOL plusXIsChoose;
@property (nonatomic) BOOL isNewConstruction;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (void)useCloseBackBtn;
- (BOOL)supportStdNaviBar;
- (void)p_updateUI;
- (id)p_createCloseBarAction;
- (id)initWithPayAndXInfo:(id)a0 currentShowConfig:(id)a1 plusXIsChoose:(BOOL)a2 isNewConstruction:(BOOL)a3;
- (id)p_configHighRecommendSubTitle;
- (id)p_buildVoucherStrWithIsNewConstruction:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)containerHeight;

@end
