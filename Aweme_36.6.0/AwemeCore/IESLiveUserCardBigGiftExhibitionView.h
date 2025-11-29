@class UIView, UIStackView, IESLiveUserCardStore, NSString, IESLiveGiftExhibitionBanner, UIImageView, NSMutableArray, HTSLiveAmazingBackgroundView, IESLiveAnimatedImageView, UILabel;

@interface IESLiveUserCardBigGiftExhibitionView : UIView <IESLiveUserCardHonorWallViewProtocol>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveGiftExhibitionBanner *giftExhibitionData;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *backgroundColorView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *subTitleText;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *collecAllImageView;
@property (retain, nonatomic) UIImageView *rightBackgroundImageView;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) UIImageView *suffixIcon;
@property (retain, nonatomic) UIStackView *rightContainerView;
@property (retain, nonatomic) UIView *parentRightView;
@property (nonatomic) double widthSpace;
@property (retain, nonatomic) NSMutableArray *animationList;
@property (nonatomic) BOOL shouldPlayAnimation;
@property (copy, nonatomic) NSString *playGradeLevelUpAnimationKey;
@property (retain, nonatomic) IESLiveAnimatedImageView *gradeAnimationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textColor:(BOOL)a0;
- (void)usercardOpenFinished;
- (void)trackEvent:(id)a0 isClicked:(BOOL)a1;
- (BOOL)useUniverseInfo;
- (BOOL)shouldPlayGradeLevelUpAnimation;
- (void)doTap;
- (struct CGSize { double x0; double x1; })parentViewSize;
- (id)createColors;
- (BOOL)startDisplayAnimationIfNeed;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)textContent;
- (void)setupUI;
- (BOOL)shouldShowAnimation;
- (id)userType:(id)a0;

@end
