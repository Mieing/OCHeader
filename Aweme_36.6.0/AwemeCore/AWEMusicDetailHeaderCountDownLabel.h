@interface AWEMusicDetailHeaderCountDownLabel : UILabel

@property (nonatomic) double duration;
@property (nonatomic) double startTime;

- (void)updatePlayProgressTime:(double)a0;
- (void)setUp;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
