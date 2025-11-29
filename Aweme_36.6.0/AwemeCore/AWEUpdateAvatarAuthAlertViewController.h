@interface AWEUpdateAvatarAuthAlertViewController : UIViewController

@property (copy, nonatomic) id /* block */ openCameraBlock;

+ (Class)aAFDUpdateAvatarAuthAlertAdapterClass;

- (id)aAFDUpdateAvatarAuthAlertAdapter;
- (id)authAlertBtnTitles:(long long)a0;
- (void)clickAuthAlertBtn:(id)a0;
- (BOOL)p_isCameraEnable;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;

@end
