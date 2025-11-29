@class UIView, NSString, BDPHostPanelContentLotModel, BDPUniqueID, NSDictionary, UIButton, BDPHostPanelContentBaseControllerHeaderModel, BDPHostPanelContentBaseControllerButtonListModel, UILabel;

@interface BDPBusinessRevisitGuideV2Controller : BDPHostPanelContentBaseController <BDPRevisitGuideAlertBasicDataProtocol, BDPRevisitGuideInfoProtocol>

@property (weak, nonatomic) UILabel *mainTitleLabel;
@property (weak, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) UIView *lottieContainerView;
@property (weak, nonatomic) UIView *lottieView;
@property (weak, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) UIView *buttonListView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long currentActionType;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (retain, nonatomic) BDPHostPanelContentBaseControllerHeaderModel *headerModel;
@property (copy, nonatomic) NSString *mainTitleLabelText;
@property (copy, nonatomic) NSString *subTitleLabelText;
@property (retain, nonatomic) BDPHostPanelContentBaseControllerButtonListModel *buttonListModel;
@property (nonatomic) unsigned long long closeType;
@property (nonatomic) double presentTimestamp;
@property (copy, nonatomic) id /* block */ didClosedAction;
@property (retain, nonatomic) BDPHostPanelContentLotModel *lotModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea;
- (void)closeButtonDidClick;
- (void)sheetDidClickCloseButton;
- (void)p_tryToSetCloseType:(unsigned long long)a0;
- (void)startLotAction;
- (void)afterLotSourceReady;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
