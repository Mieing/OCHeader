@class TextStateIcon, NSString, UIImageView, UIColor, MMWebImageView, UIView, MMUILabel;

@interface TextStatePublishIconButton : UIControl

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *iconDescriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic, getter=isShowingRedDot) BOOL showingRedDot;
@property (nonatomic, getter=isShowBackground) BOOL showBackground;
@property (nonatomic) unsigned int redDotStyle;
@property (retain, nonatomic) TextStateIcon *iconWrap;
@property (retain, nonatomic) NSString *customIconDescription;
@property (retain, nonatomic) NSString *forceDescription;
@property (nonatomic) double iconSideLength;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) struct CGSize { double width; double height; } arrowImageSize;
@property (nonatomic) BOOL hideDescription;
@property (nonatomic) BOOL hideArrow;
@property (nonatomic) BOOL autoExpandHitArea;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initDefaultValues;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (void)refreshIconDescriptionLabel;
- (void)addShadowEffect;
- (void)showRedDot;
- (void)hideRedDot;
- (void)showBackground;
- (void)hideBackground;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
