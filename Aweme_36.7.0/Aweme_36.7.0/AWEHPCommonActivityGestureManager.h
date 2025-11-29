@interface AWEHPCommonActivityGestureManager : NSObject

+ (unsigned long long)directionForPan:(id)a0;
+ (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0;
+ (BOOL)slidingScrollViewShouldOptimizeForPanGestureVerticalSlide;
+ (BOOL)feedTabSlidingScrollViewShouldScrollWithPan:(id)a0;
+ (double)activityTabPanGestureTanValue;

@end
