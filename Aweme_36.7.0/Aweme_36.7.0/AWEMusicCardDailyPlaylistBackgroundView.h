@class UIColor, CAGradientLayer, UIView;

@interface AWEMusicCardDailyPlaylistBackgroundView : UIView

@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) UIView *dragHandlerView;
@property (retain, nonatomic) UIColor *baseColor;
@property (nonatomic) BOOL needHideDragHandlerView;

+ (double)viewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 baseColor:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
