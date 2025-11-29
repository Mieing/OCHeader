@class NSString;

@interface AWELivePageSnapControllerServiceImpl : NSObject <IESLivePageSnapControllerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)aweAnimationCurve:(unsigned long long)a0;
- (void)configPageScrollView:(id)a0 withDuration:(double)a1 curveType:(unsigned long long)a2;
- (void)startScrollViewAnimating:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)startScrollViewAnimating:(id)a0 targetContentOffset:(struct CGPoint { double x0; double x1; })a1 triggerDelegateCallback:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })targetContentOffsetWithScrollView:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)scrollViewIsDecelerating:(id)a0;

@end
