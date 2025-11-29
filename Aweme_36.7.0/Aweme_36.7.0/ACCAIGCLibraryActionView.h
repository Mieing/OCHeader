@class ACCAIGCLoraProfileModel, UIImageView, UILabel, UIView;
@protocol _TtP9AWELottie13AWELottieView_, ACCAIGCLibraryActionDelegate;

@interface ACCAIGCLibraryActionView : UIView

@property (nonatomic) long long profileStatus;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (retain, nonatomic) UIView *defaultContentView;
@property (retain, nonatomic) UILabel *createProfileLabel;
@property (retain, nonatomic) UILabel *createProfileSecondLabel;
@property (retain, nonatomic) UIView *createProfileBGView;
@property (retain, nonatomic) UIView *createBottomContentView;
@property (retain, nonatomic) UIImageView *createBottomIcon;
@property (retain, nonatomic) UILabel *createBottomLabel;
@property (retain, nonatomic) UIView *profileContentView;
@property (retain, nonatomic) UIImageView *profileBGView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarCenterView;
@property (retain, nonatomic) UILabel *avatarLabel;
@property (retain, nonatomic) UIView *nextContentView;
@property (retain, nonatomic) UILabel *nextLabel;
@property (retain, nonatomic) UIImageView *nextView;
@property (retain, nonatomic) UILabel *waitingLabel;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *guideAnimationView;
@property (retain, nonatomic) UIView *createUGCBGView;
@property (retain, nonatomic) UILabel *createUGCLabel;
@property (weak, nonatomic) id<ACCAIGCLibraryActionDelegate> delegate;

- (void)avatarClicked;
- (void)updateAvatarView;
- (void)setupDefaultUI;
- (long long)getProfileStatus:(BOOL)a0;
- (void)setupProfileUI;
- (void)updateWaiting;
- (BOOL)shouldShowDefaultActionViewWithProfileModel:(id)a0 emptyHistory:(BOOL)a1;
- (void)customKeyWordsClicked;
- (void)nextPageClicked;
- (id)initWithModel:(id)a0 emptyHistory:(BOOL)a1;
- (void)updateUIWithProfileModel:(id)a0 emptyHistory:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
