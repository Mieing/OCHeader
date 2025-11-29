@class CAGradientLayer, NSString, UIImageView, NSDictionary, UILabel, UIView;

@interface AWEFeedLiveHeadDecorationView : UIView <CAAnimationDelegate, AWEFeedLiveDecorateViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *mainIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nextTitleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSDictionary *roomDict;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL showMainIconAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setUpUI;
- (BOOL)enableBigFontAdapt;
- (id)p_contents;
- (id)p_iconUrls;
- (BOOL)isTreasureBox;
- (double)timeBeforeContentRoll;
- (BOOL)boxAnimationRepeat;
- (void)updateWithRoomDict:(id)a0;
- (int)couponMateId;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
