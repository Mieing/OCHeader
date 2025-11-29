@class RSAnimationHeadImgView, NSString;
@protocol RSVerifyAnimationViewDelegate;

@interface RSVerifyAnimationView : MMUIScrollView <UIScrollViewDelegate> {
    struct CGPoint { double x; double y; } _originPoint;
    struct CGSize { double width; double height; } _originSize;
}

@property (retain, nonatomic) RSAnimationHeadImgView *headImage;
@property (weak, nonatomic) id<RSVerifyAnimationViewDelegate> rsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)doZoomIn:(float)a0 animated:(BOOL)a1;
- (void)doZoomOut:(float)a0 animated:(BOOL)a1;
- (void)startAnimationWithRadarSearchMember:(id)a0 remarkName:(id)a1 OriginPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)doZoomOutAnimation;
- (void)onZoomInFinish;
- (void)onZoomOutFinish;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;

@end
