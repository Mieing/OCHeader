@class UIColor, UIImageView, UIVisualEffectView, UILabel, UIView;

@interface ACCStickerDeleteView : UIView

@property (retain, nonatomic) UIView *corView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL lazyLoad;
@property (retain, nonatomic) UIVisualEffectView *effectLazyView;
@property (retain, nonatomic) UIView *corLazyView;
@property (retain, nonatomic) UIImageView *topLazyImageView;
@property (retain, nonatomic) UIImageView *bottomLazyImageView;
@property (retain, nonatomic) UILabel *textLazyLabel;
@property (nonatomic) double recWidth;
@property (nonatomic) double recHeight;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highlightColor;

- (double)expectedWidth;
- (void)onDeleteActived;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })handleFrame;
- (void)onDeleteInActived;
- (id)expectedNormalColor;
- (void)lazyLoadSubViews;
- (double)recommendTop;
- (id)expectedHighlightColor;
- (id)initWithRecWidth:(double)a0 recHeight:(double)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)layoutSubviews;
- (double)expectedHeight;

@end
