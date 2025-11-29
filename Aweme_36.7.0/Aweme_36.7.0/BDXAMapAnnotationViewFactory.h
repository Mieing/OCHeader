@class NSString;

@interface BDXAMapAnnotationViewFactory : NSObject <BDXLynxMapAnnotationViewFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAnnotationView:(id)a0 annotation:(id)a1 customView:(id)a2;
- (void)updateAnnotationView:(id)a0 withAnnotation:(id)a1;
- (id)_getContentAttributesWithContentStyle:(id)a0;
- (id)_getAnnotationAnimationGroupWithAnimation:(id)a0;
- (id)getMediaTimingFillModeWithAnnotationAnimateFillMode:(unsigned long long)a0;
- (id)viewForAnnotation:(id)a0 inMapView:(id)a1;
- (void)startAnimationWithAnnotationView:(id)a0 withAnimation:(id)a1;

@end
