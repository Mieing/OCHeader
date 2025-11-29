@class UIView;

@interface AWETeenModeFastEntryButton : UIButton

@property (nonatomic) double animationDuration;
@property (retain, nonatomic) UIView *redView;
@property (nonatomic) BOOL shouldFitBigFont;
@property (nonatomic) BOOL teenModeEnable;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTeenMode:(BOOL)a1 shouldFitBigFont:(BOOL)a2;
- (double)bigFontAutoLength:(double)a0;
- (void)setButtonContentWithTeenMode:(BOOL)a0;
- (void)setButtonWithIconOnlyWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setButtonWithTextOnly;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTeenMode:(BOOL)a1;
- (BOOL)isShowingRedViewForFastEntry;
- (void)setButtonWithIconOnly;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
