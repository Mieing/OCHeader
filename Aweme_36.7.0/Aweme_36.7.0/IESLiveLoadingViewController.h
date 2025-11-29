@class UIImageView, NSString, IESLiveWebpLoadingView;
@protocol IESLiveAudienceRoomAwareness;

@interface IESLiveLoadingViewController : UIViewController

@property (retain, nonatomic) UIImageView *backupImageView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (nonatomic) double clickTime;
@property (nonatomic) BOOL disableBlur;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) NSString *imageUrlStr;

+ (void)replaceLoadingVC:(id)a0 withAudienceVC:(id)a1 withRoomAisle:(id)a2;
+ (void)replaceLoadingVC:(id)a0 withAudienceVC:(id)a1 inNavigationVC:(id)a2;

- (id)initWithBackImageUrlStr:(id)a0;
- (void)addbackupImageView;
- (void)showBackImageViewIfNeeded;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
