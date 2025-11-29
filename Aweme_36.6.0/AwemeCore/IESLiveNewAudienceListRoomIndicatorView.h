@class NSTimer, UIView, UIImageView, NSMutableArray, HTSLiveCommonBizInfo, MASConstraint, NSNumber, UILabel;

@interface IESLiveNewAudienceListRoomIndicatorView : UIButton

@property (retain, nonatomic) HTSLiveCommonBizInfo *roomIndicatorInfo;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isFirstChange;
@property (nonatomic) BOOL isZeroNumber;
@property (nonatomic) BOOL isShowingCount;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) MASConstraint *firstLineImageSizeConstraint;
@property (retain, nonatomic) MASConstraint *secondLineImageSizeConstraint;
@property (retain, nonatomic) MASConstraint *secondLineTopConstraint;
@property (retain, nonatomic) MASConstraint *containerViewTopConstraint;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) NSTimer *vanishTimer;
@property (retain, nonatomic) UILabel *firstLineLabel;
@property (retain, nonatomic) UILabel *secondLineLabel;
@property (retain, nonatomic) UIImageView *firstLineImageView;
@property (retain, nonatomic) UIImageView *secondLineImageView;
@property (retain, nonatomic) UILabel *addSymbolLabel;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (nonatomic) BOOL isEnding;
@property (nonatomic) BOOL isEndingInterrupted;

- (void)reShowSecondLineLabel;
- (void)updateLabelArrayColor:(id)a0;
- (void)refreshUserCount:(id)a0;
- (void)startVanishTimer;
- (void)refreshUserCount:(id)a0 endText:(id)a1;
- (void)setFirstLineImageWithImage:(id)a0;
- (void)setSecondLineImageWithImage:(id)a0;
- (id)initWithStimulateStyle:(long long)a0;
- (BOOL)isRoomIndicatorCommonStyle;
- (double)currentViewContentWidth;
- (void)handleRoomIndicatorConstraintWithNumber:(id)a0 showSuffix:(BOOL)a1 endText:(id)a2;
- (void)createContainerLables:(id)a0 showSuffix:(BOOL)a1;
- (void)labelArrayDoAnimation:(id)a0 showSuffix:(BOOL)a1;
- (void)stopVanishTimer;
- (void)p_createContainerLableWithString:(id)a0;
- (void)p_layoutLabelArray;
- (void)p_labelArrayDoAnimationSame:(id)a0;
- (void)p_lableArrayDoAnimationMoreThan:(id)a0;
- (void)p_lableArrayDoAnimationLessThan:(id)a0;
- (void)p_labelSetText:(id)a0 text:(id)a1;
- (void).cxx_destruct;
- (void)setTitleText:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
