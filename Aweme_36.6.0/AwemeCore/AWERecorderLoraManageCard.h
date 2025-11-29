@class NSTimer, AWECodeGenV1AiMarkPointResponse, UIView, ACCAIGCLoraProfileModel, UIImageView, AWEGradientView, UILabel, ACCAnimatedButton;
@protocol _TtP9AWELottie13AWELottieView_, AWERecorderLoraManageCardDelegate;

@interface AWERecorderLoraManageCard : UIView

@property (nonatomic) long long profileStatus;
@property (nonatomic) BOOL emptyHistory;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarContentView;
@property (retain, nonatomic) UIImageView *avatarStarView;
@property (retain, nonatomic) ACCAnimatedButton *profileBGView;
@property (retain, nonatomic) AWEGradientView *darkThemeGradientView;
@property (retain, nonatomic) UILabel *avatarLabel;
@property (retain, nonatomic) UILabel *subAvatarLabel;
@property (retain, nonatomic) UIView *nextContentView;
@property (retain, nonatomic) UILabel *nextLabel;
@property (retain, nonatomic) UIImageView *nextView;
@property (retain, nonatomic) UIImageView *unreadRedpoint;
@property (retain, nonatomic) UILabel *createButton;
@property (retain, nonatomic) UIView *guideContentView;
@property (retain, nonatomic) UIImageView *guideView;
@property (retain, nonatomic) UIImageView *guideViewRedpoint;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isFisrtTrack;
@property (retain, nonatomic) UIView *defaultContentView;
@property (retain, nonatomic) UILabel *createProfileLabel;
@property (retain, nonatomic) UILabel *createProfileSecondLabel;
@property (retain, nonatomic) UIView *createProfileBGView;
@property (retain, nonatomic) UIView *createBottomContentView;
@property (retain, nonatomic) UIImageView *createBottomIcon;
@property (retain, nonatomic) UILabel *createBottomLabel;
@property (retain, nonatomic) UIView *profileContentView;
@property (retain, nonatomic) UIImageView *avatarCenterView;
@property (retain, nonatomic) UILabel *waitingLabel;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *guideAnimationView;
@property (retain, nonatomic) UIView *createUGCBGView;
@property (retain, nonatomic) UILabel *createUGCLabel;
@property (nonatomic) BOOL hasLayoutSubviews;
@property (retain, nonatomic) AWECodeGenV1AiMarkPointResponse *unreadResponse;
@property (weak, nonatomic) id<AWERecorderLoraManageCardDelegate> delegate;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;

- (void)onThemeChanged;
- (void)updateAvatarView;
- (void)updateWaiting;
- (BOOL)shouldShowDefaultActionViewWithProfileModel:(id)a0 emptyHistory:(BOOL)a1;
- (long long)getProfileStatus;
- (void)configDynamicThemeColorIfNeeded;
- (void)addShadow;
- (void)updateUnreadStatus;
- (void)updateAvatarLabel;
- (void)updateSubAvatarLabel;
- (void)getUnreadPointStatusBySever;
- (void)getUnreadPointStatusByClient;
- (void)trackRecordEntranceShow;
- (void)profileBGViewClicked;
- (void)updateUIWithProfileModel:(id)a0 UnreadModel:(id)a1;
- (id)extractFirstResourceURLFromTask:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
