@class NSArray, MMTimer;

@interface WXGDotDotDotLabel : UILabel {
    MMTimer *m_animationTimer;
    unsigned long long m_imageIndex;
}

@property (retain, nonatomic) NSArray *wordList;
@property (nonatomic) double duration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)animateforDuration:(double)a0;
- (void)_startAnimations;
- (void).cxx_destruct;

@end
