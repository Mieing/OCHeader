@class NSString, AWEBigFontSettingBottomView, AWEBigFontPreview, UIView;

@interface AWEBigFontSettingViewController : UIViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEBigFontPreview *previewView;
@property (retain, nonatomic) AWEBigFontSettingBottomView *bottomView;
@property (retain, nonatomic) UIView *rightNaviBarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)awe_themeReload;
- (void)backButtonClicked;
- (void)addNotifications;
- (id)aAWEPadBizUIAdapter;
- (BOOL)adapterPadGridEnable;
- (void)systemFontSizeChanged;
- (void)ensureButtonClicked;
- (unsigned long long)getSystemReflectFontSelectIndex;
- (void)showElderAlertIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
