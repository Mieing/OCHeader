@class NSArray;
@protocol ImplicitViewDelegate;

@interface ImplicitView : UIImageView {
    unsigned long long m_curFrameIndex;
    NSArray *m_frames;
    double m_nextTimeToFlashFrame;
}

@property (weak, nonatomic) id<ImplicitViewDelegate> delegate;
@property (nonatomic) int residueNumForRebound;
@property (nonatomic) double speedX;
@property (nonatomic) double speedY;
@property (nonatomic) double accelerationY;
@property (nonatomic) double scaleSpeed;
@property (nonatomic) unsigned long long beginPosition;
@property (nonatomic) BOOL hasStartAnimation;
@property (nonatomic) long long animationType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onWillStartWithOrigin:(inout struct CGPoint { double x0; double x1; } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setImplicitFrames:(id)a0;
- (void)updateFrameWithBottomBoundaryY:(double)a0;
- (void)flashFrameWithTimeInterval:(double)a0;
- (void).cxx_destruct;

@end
