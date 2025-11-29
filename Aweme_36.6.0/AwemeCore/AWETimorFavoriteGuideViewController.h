@class NSString, NSDictionary, UIImageView, BDPAlertControllerTheme, BDPUniqueID, UIView;

@interface AWETimorFavoriteGuideViewController : UIViewController

@property (weak, nonatomic) UIView *alertView;
@property (retain, nonatomic) BDPAlertControllerTheme *theme;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSString *userDefaultKey;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (weak, nonatomic) UIImageView *staticView;

- (void)closeBtnClicked:(id)a0;
- (void)removeFromParentVC;
- (void)setupAlertView;
- (void)setupStaticView;
- (id)initWithUniqueId:(id)a0 userDefaultKey:(id)a1 staticView:(id)a2 extraInfo:(id)a3;
- (void)setupFavoriteSuccessLabel;
- (void)setupAnimeView;
- (void)setupGuideLabel;
- (void)clickNotMindButton:(id)a0;
- (void)clickGetItButton:(id)a0;
- (id)initWithUniqueId:(id)a0 userDefaultKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupButtons;

@end
