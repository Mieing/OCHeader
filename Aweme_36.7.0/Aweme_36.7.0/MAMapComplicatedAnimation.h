@class MAInternalMapStatus, MAMapKeyFrameAnimation, CAKeyframeAnimation;

@interface MAMapComplicatedAnimation : MAMapAnimation {
    MAMapKeyFrameAnimation *_interCenterAnim;
    MAMapKeyFrameAnimation *_interZoomAnim;
    MAMapKeyFrameAnimation *_interRotateAnim;
    MAMapKeyFrameAnimation *_interCameraDegreeAnim;
    MAInternalMapStatus *_interEndValue;
}

@property (retain, nonatomic) CAKeyframeAnimation *mapCenterAnimation;
@property (retain, nonatomic) CAKeyframeAnimation *zoomAnimation;
@property (retain, nonatomic) CAKeyframeAnimation *rotateAnimation;
@property (retain, nonatomic) CAKeyframeAnimation *cameraDegreeAnimation;
@property (retain, nonatomic) MAInternalMapStatus *mapStatus;

- (void)onBegin;
- (void)onEnd:(BOOL)a0;
- (id)MAKeyFrameAnimFromCAKeyframeAnim:(id)a0;
- (id)timingFuncsFromCATimingFuntions:(id)a0;
- (void)triggerStartDelegateForCAAnimation:(id)a0;
- (void)triggerStopDelegateForCAAnimation:(id)a0 finished:(BOOL)a1;
- (id)internalForMediaTimingFunction:(id)a0;
- (void).cxx_destruct;
- (id)currentValue;
- (id)init;
- (void)step:(double)a0;
- (id)endValue;

@end
