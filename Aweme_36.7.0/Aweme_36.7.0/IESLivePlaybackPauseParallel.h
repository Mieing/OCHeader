@class UIView;

@interface IESLivePlaybackPauseParallel : UIView

@property (retain, nonatomic) UIView *left;
@property (retain, nonatomic) UIView *right;
@property (nonatomic) BOOL isLandscape;
@property (readonly, nonatomic) double r;
@property (readonly, nonatomic) double h;
@property (readonly, nonatomic) double totalWidth;
@property (readonly, nonatomic) double deltaWidth;
@property (readonly, nonatomic) double leftLineCenterX;
@property (readonly, nonatomic) double rightLineCenterX;
@property (copy, nonatomic) id /* block */ parallelAnimationCompletionBlock;

- (void)updateIsLandscape:(BOOL)a0 isPlaying:(BOOL)a1;
- (void)seperateParallel:(double)a0 time:(double)a1;
- (void)mergeParallel:(double)a0 time:(double)a1;
- (void)updateLine:(id)a0 centerX:(double)a1 height:(double)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
