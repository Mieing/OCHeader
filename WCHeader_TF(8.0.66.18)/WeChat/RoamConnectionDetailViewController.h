@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol IRoamGuideConnectedDelegate;

@interface RoamConnectionDetailViewController : MMUIViewController <IRoamBackupPackageServiceExt, INetworkStatusMgrExt, IOnlineClientMgrExt>

@property (retain, nonatomic) UIView *uiContainerView;
@property (retain, nonatomic) UIImageView *uiMainIconView;
@property (retain, nonatomic) UILabel *uiMainTitleLabel;
@property (retain, nonatomic) UIView *uiCellContainerView;
@property (retain, nonatomic) UIView *uiTipsContainerView;
@property (retain, nonatomic) UILabel *uiPcLoginLabel;
@property (retain, nonatomic) UILabel *uiConnectedLabel;
@property (retain, nonatomic) UILabel *uiPhoneConnectedLabel;
@property (retain, nonatomic) UILabel *uiPcConnectedLabel;
@property (retain, nonatomic) UIButton *uiBottomBtn;
@property (retain, nonatomic) UIView *uiButtonLoadingView;
@property (retain, nonatomic) UIView *pcLoginCell;
@property (retain, nonatomic) UILabel *step1Label;
@property (retain, nonatomic) UILabel *targetDeviceLabel;
@property (retain, nonatomic) UIView *seperator2;
@property (retain, nonatomic) UIView *connectCell;
@property (retain, nonatomic) UIView *seperator3;
@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *pcWifiName;
@property (retain, nonatomic) NSString *phoneWifiName;
@property (nonatomic) BOOL isPresentMode;
@property (nonatomic) BOOL isPCUsbEnabled;
@property (weak, nonatomic) id<IRoamGuideConnectedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnectionType:(unsigned long long)a0;
- (id)initWithPresentModeAndConnectionType:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)setupViews;
- (void)updateViews;
- (void)updateTipsView;
- (void)onTapToAllow:(id)a0;
- (void)onTapUseUsb:(id)a0;
- (void)onTapUseWifi:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)a0 packageID:(unsigned long long)a1;
- (void)onPCNetworkChangedWithWifi:(id)a0 usbEnabled:(BOOL)a1;
- (void)onOnlineInfoUpdated;
- (void)onGetWifiName:(id)a0;
- (void)onTapNavBack;
- (void)setUiLabelAutoNewLine:(id)a0;
- (void).cxx_destruct;

@end
