@class UIColor;

@interface EmoticonCellLikeButton : UIButton

@property (retain, nonatomic) UIColor *originBackgroundColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) double animateDuration;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelSelectedState;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
