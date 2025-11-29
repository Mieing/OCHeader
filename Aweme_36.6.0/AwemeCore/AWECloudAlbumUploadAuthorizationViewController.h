@class NSString, UIImageView, UILabel, ACCButton, YYLabel;
@protocol AWECloudAlbumPopupViewControllerHelper;

@interface AWECloudAlbumUploadAuthorizationViewController : UIViewController <AWEPanelTransitionWithBackground, AWECloudAlbumUploadAuthorizationViewControllerProtocol>

@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *headerTitle;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) YYLabel *privacyTip;
@property (retain, nonatomic) ACCButton *disallowedBtn;
@property (retain, nonatomic) ACCButton *allowedBtn;
@property (nonatomic) BOOL dismissWithoutClickBtn;
@property (copy, nonatomic) id /* block */ authorizationBlock;
@property (retain, nonatomic) id<AWECloudAlbumPopupViewControllerHelper> helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)makeConstraint;
- (void)popupAuthorizationPageWithBtnCallBack:(id /* block */)a0 onViewController:(id)a1;
- (void)allowedAction;
- (void)disAllowedAction;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
