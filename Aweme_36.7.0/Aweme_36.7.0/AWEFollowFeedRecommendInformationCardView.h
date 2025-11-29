@class UIView, AWEFollowFeedRecommendUserStatisticsView, AWEUserRecommendConcernUser, NSString, UIImageView, UIButton, AWEFollowFeedRecommendVideoListContainerView, UILabel;

@interface AWEFollowFeedRecommendInformationCardView : UIView <AWEFollowFeedRecommendCardProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEFollowFeedRecommendUserStatisticsView *statisticsView;
@property (retain, nonatomic) AWEFollowFeedRecommendVideoListContainerView *videoContainerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEUserRecommendConcernUser *recommendUser;
@property (retain, nonatomic) UIView *fakeBackgroundImageView;
@property (retain, nonatomic) UIView *fakeAvatarImageView;
@property (retain, nonatomic) UIView *fakeNicknameLabel;
@property (retain, nonatomic) UIView *fakeReasonLabel;
@property (retain, nonatomic) UIView *fakeStatisticsLeftView;
@property (retain, nonatomic) UIView *fakeStatisticsRightView;
@property (retain, nonatomic) UIView *fakeVideoContainerView;
@property (nonatomic) double cardWidth;
@property (nonatomic) double cardNumRatio;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isBigCardStyle;
@property (copy, nonatomic) id /* block */ closeCardBtnClickedBlock;
@property (copy, nonatomic) id /* block */ enterDetailVCBlock;
@property (copy, nonatomic) id /* block */ interactedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configWithConcernUser:(id)a0;
- (void)addFakeCard;
- (void)removeFakeCard;
- (void)configRecommendReason;
- (id)generateFakeView;
- (void)clickBtn:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateData;
- (double)avatarWidth;

@end
