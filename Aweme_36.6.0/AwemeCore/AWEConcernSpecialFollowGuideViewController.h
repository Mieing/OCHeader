@class AWEUserModel, NSString, UIImageView, NSDictionary, UILabel, AWEVideoPlayerController, DUXAbandonedButton;

@interface AWEConcernSpecialFollowGuideViewController : AWEHalfScreenBaseViewController <AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXAbandonedButton *confirmButton;
@property (retain, nonatomic) AWEVideoPlayerController *playerController;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)createFileName;
+ (BOOL)geckoResourceDownloadSuccess;

- (id)aAWEPadModuleAdapter;
- (void)preparedToPlayForURL:(id)a0;
- (void)playbackDidFailForURL:(id)a0 error:(id)a1;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)configPlayer;
- (void)onClosePanelViewClick:(id)a0;
- (void)switchDidChange:(id)a0;
- (void)dismissGuideView;
- (void)showSystemNotificationViewIfNeeded;
- (void)presentHalfScreenVC:(id)a0 withView:(id)a1;
- (void)p_adaptiveLowVersionSystemWithVC:(id)a0 withView:(id)a1;
- (id)initWithType:(unsigned long long)a0 userModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (double)containerHeight;
- (void)confirmButtonClicked;
- (double)containerWidth;

@end
