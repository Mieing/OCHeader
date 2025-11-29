@class RingToneVideoSearchViewController;

@interface RingToneSearchLayout : WCFinderStreamLayout

@property (weak, nonatomic) RingToneVideoSearchViewController *currentVC;
@property (nonatomic) unsigned long long autoPlaySection;
@property (nonatomic) double barHeight;

- (double)scrollForDirection:(unsigned long long)a0 section:(long long)a1 needPadding:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
