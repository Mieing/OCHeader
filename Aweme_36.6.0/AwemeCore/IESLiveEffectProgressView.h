@class UIColor;

@interface IESLiveEffectProgressView : UIView

@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progerssColor;
@property (retain, nonatomic) UIColor *progerssBackgroundColor;
@property (nonatomic) double progerWidth;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
