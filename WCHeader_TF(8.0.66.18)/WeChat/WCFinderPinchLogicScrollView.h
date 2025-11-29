@class NSString;
@protocol WCFinderPinchLogicScrollViewDelegate;

@interface WCFinderPinchLogicScrollView : UIScrollView <UIScrollViewDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinchContentDefaultRect;
@property (nonatomic) unsigned long long zoomInStartTimeStampMs;
@property (nonatomic) double scaleBeforeZoom;
@property (nonatomic) unsigned long long timeStampBeforeZoom;
@property (nonatomic) BOOL isTriggerBySetZoomAnimated;
@property (weak, nonatomic) id<WCFinderPinchLogicScrollViewDelegate> finderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (BOOL)isInPinchOutState;
- (BOOL)isInPinchInState;
- (void)setScrollViewCanPinch:(BOOL)a0;
- (void)resetToInitialZoomScale;
- (id)pinchContentView;
- (unsigned long long)_checkMediaViewBouncingResult;
- (unsigned long long)_checkMediaViewBouncingResultWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)contentVM;
- (id)commonReportDict;
- (void)reportZoomEventWithBeforeZoom:(double)a0 endDraggingZoom:(double)a1 afterZoom:(double)a2;
- (void)reportZoomExitEventWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
