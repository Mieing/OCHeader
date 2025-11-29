@class DUXAbandonedButton, AWEVideoPlayerController, UIImageView, NSString, UILabel, AWEUserModel, UIButton;

@interface AWEConcernBellPushGuideViewController : AWEHalfScreenBaseViewController <AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) DUXAbandonedButton *rightButton;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) AWEVideoPlayerController *playerController;
@property (nonatomic) BOOL isPlaying;
@property (copy, nonatomic) id /* block */ alertCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)createFileNameWithPageType:(unsigned long long)a0;
+ (BOOL)geckoResourceDownloadSuccessWithPageType:(unsigned long long)a0;
+ (BOOL)isDarkMode;

- (id)aAWEPadModuleAdapter;
- (void)preparedToPlayForURL:(id)a0;
- (void)playbackDidFailForURL:(id)a0 error:(id)a1;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)configPlayer;
- (void)updateSubTitle;
- (void)p_trackWithAuthorID:(id)a0 ActionType:(id)a1 clickType:(id)a2;
- (void)onClosePanelViewClick:(id)a0;
- (void)onGotoSettingButtonClick;
- (id)initWithUserModel:(id)a0 pageType:(unsigned long long)a1;
- (void)trackWithAuthorID:(id)a0 ActionType:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (double)containerHeight;
- (double)containerWidth;

@end
