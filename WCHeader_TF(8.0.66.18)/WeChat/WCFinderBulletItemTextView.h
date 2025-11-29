@class WCFinderBulletGeneralConfig, WCFinderStrokeLabel, UIImageView, _TtC6WeChat20WFDEnhancedLabelView, UIView, WCFinderBulletItem;

@interface WCFinderBulletItemTextView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderBulletGeneralConfig *config;
@property (retain, nonatomic) _TtC6WeChat20WFDEnhancedLabelView *textLabel;
@property (retain, nonatomic) UIImageView *userIdentityImg;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) WCFinderStrokeLabel *likeCountLabel;
@property (weak, nonatomic) WCFinderBulletItem *item;

+ (double)containerExtraWidthWithItem:(id)a0 font:(id)a1;
+ (double)estimatedHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)updateContent:(id)a0 containerWidth:(double)a1;
- (void)updateLikeCount;
- (unsigned long long)tapGestureHittingAreaWithGestureLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_showLikeCount;
- (void)_updateLikeTipsWithHighlight:(BOOL)a0;
- (void).cxx_destruct;

@end
