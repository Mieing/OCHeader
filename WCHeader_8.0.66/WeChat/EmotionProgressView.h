@class UIView;

@interface EmotionProgressView : UIView

@property (nonatomic) double progress;
@property (retain, nonatomic) UIView *foregroundView;
@property (retain, nonatomic) UIView *backgroundView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setBackColor:(id)a0;
- (void)setPrsColor:(id)a0;
- (void)updateSizeIfNeeded;
- (void).cxx_destruct;

@end
