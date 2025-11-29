@class UIImageView, UIView, UILabel, UIButton;
@protocol IESLiveGuideCoverSettingViewControllerDelegate;

@interface IESLiveGuideCoverSettingViewController : UIViewController

@property (retain, nonatomic) UIView *fakeNavigationBar;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *autoCoverEnableButton;
@property (retain, nonatomic) UIButton *autoCoverEnableExpandButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *resetCoverButton;
@property (weak, nonatomic) id<IESLiveGuideCoverSettingViewControllerDelegate> delegate;
@property (nonatomic) BOOL supportedAutoCover;
@property (nonatomic, getter=isAutoCoverEnable) BOOL autoCoverEnable;
@property (nonatomic) BOOL isUploadCover;
@property (nonatomic) unsigned long long liveType;

- (void)setCoverImage:(id)a0;
- (void)bindActions;
- (void)setCoverImageWithURLs:(id)a0;
- (void)reportViewShowedTracker;
- (void)setupFakeNavigationBar;
- (void)reportDidChangedAutoCoverTracker;
- (id)liveTypeTrackerStringWithLiveType:(unsigned long long)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)setupUI;

@end
