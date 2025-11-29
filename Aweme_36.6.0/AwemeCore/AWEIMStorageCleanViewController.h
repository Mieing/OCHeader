@class DUXLoadingToast, UIImageView, UILabel, UIButton;
@protocol AWEDiskExtremelyProtocol;

@interface AWEIMStorageCleanViewController : UIViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *cleanButton;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL isCleaning;
@property (nonatomic) unsigned long long cleanType;
@property (nonatomic) double cacheSize;
@property (retain, nonatomic) id<AWEDiskExtremelyProtocol> diskExtremely;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)calculateCacheSize;
- (void)trackWithScene:(id)a0;
- (void)backBtnAction;
- (id)p_cacheSizeToUnitString:(double)a0;
- (void)p_dismissFrom:(id)a0;
- (void)p_cleanCacheByTypeWithCompletion:(id /* block */)a0;
- (void)cleanButtonAction;
- (void)cleanButtonTouchDown;
- (void)cleanButtonTouchUpOutside;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setup;

@end
