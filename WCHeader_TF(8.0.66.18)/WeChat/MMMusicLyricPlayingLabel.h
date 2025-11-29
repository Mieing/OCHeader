@class CALayer, NSMutableArray;

@interface MMMusicLyricPlayingLabel : UILabel

@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) NSMutableArray *lineMaskLayers;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1 animateDuration:(double)a2;
- (void)pause;
- (void)resume;
- (void).cxx_destruct;

@end
