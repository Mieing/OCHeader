@class UIView, NSString, UIImageView, AWEURLModel, UIButton, DUXButton, UILabel, AWEUserProfileSpecificationPostContributionGuideTipModel;

@interface AWEProfilePostEmptyPublishGuideCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *grayBgView;
@property (retain, nonatomic) UIImageView *defaultIconImageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) DUXButton *button;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *hotJumpSchema;
@property (copy, nonatomic) NSString *btnJumpSchema;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) AWEURLModel *iconURLDark;
@property (nonatomic) BOOL delayOpenSchema;
@property (nonatomic) BOOL hasTrackedTaskShown;
@property (nonatomic) BOOL taskCardFirstShowReloaded;
@property (nonatomic) BOOL isFirstTrackShowed;
@property (nonatomic) BOOL isInFallbackState;
@property (nonatomic) long long currentABPlan;
@property (weak, nonatomic) AWEUserProfileSpecificationPostContributionGuideTipModel *currentTipModel;

+ (double)viewHeight;

- (void)didMoveToSuperview;
- (void)didClickButton;
- (void)didThemeChanged;
- (void)didClickCloseButton;
- (void)configWithUserModel:(id)a0 context:(id)a1;
- (id)configTrackerInfoWithSchema:(id)a0 publishGuideTip:(id)a1;
- (void)openJumpURL:(id)a0 position:(id)a1;
- (id)parseToMutableDict:(id)a0;
- (void)p_updateUIForCurrentState;
- (void)trackTaskCardEvent:(BOOL)a0;
- (void)updateThemeColor;
- (id)defaultIconImage:(BOOL)a0;
- (void)configGontributionGuideTipsExposureLogicWith:(id)a0 userModel:(id)a1 context:(id)a2;
- (void)trackPublishGuideIfNeed:(BOOL)a0 position:(id)a1 schema:(id)a2;
- (void).cxx_destruct;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
