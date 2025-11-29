@class BDPHostPanelContentBaseControllerHeaderModel, NSString, UIImageView, BDPHostPanelContentBaseControllerButtonListModel, UILabel, UIView, UIButton;

@interface BDPHostPanelContentBusinessController : BDPHostPanelContentBaseController <BDPRevisitGuideAlertBasicDataProtocol>

@property (weak, nonatomic) UIView *headerView;
@property (weak, nonatomic) UIView *headerLottieView;
@property (weak, nonatomic) UIImageView *headerImgView;
@property (weak, nonatomic) UILabel *mainTitleLabel;
@property (weak, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) UIView *buttonListView;
@property (retain, nonatomic) BDPHostPanelContentBaseControllerHeaderModel *headerModel;
@property (copy, nonatomic) NSString *mainTitleLabelText;
@property (copy, nonatomic) NSString *subTitleLabelText;
@property (retain, nonatomic) BDPHostPanelContentBaseControllerButtonListModel *buttonListModel;
@property (copy, nonatomic) id /* block */ didClosedAction;
@property (nonatomic) unsigned long long closeType;
@property (nonatomic) double presentTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea;
- (void)sheetDidClickCloseButton;
- (void)p_resetSubview_headerView;
- (void)p_tryToSetCloseType:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
