@class NSString, NSDictionary, NSArray;

@interface AWEPOIRateLynxImage : LynxUIImage <AWEZoomTransitionOuterContextProvider, AWEPOIDetailUGCPhotosPreviewViewControllerDelegate>

@property (copy, nonatomic) NSString *rateID;
@property (nonatomic) long long selectIndex;
@property (nonatomic) BOOL hasDoMagnifyTransition;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSArray *materials;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__431;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsFromVCScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (void)zoomTransitionMagnifyFinish;
- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)a0;
- (void)photosPreviewViewController:(id)a0 didDisappearWithStayTime:(long long)a1;
- (void)photosPreviewViewController:(id)a0 didExposedPhoto:(id)a1 isFirst:(BOOL)a2;
- (id)trackingParams;
- (void)enterPhotoPreviewWithParams:(id)a0 callback:(id /* block */)a1;
- (void)handleMultiCommentsDataWithParams:(id)a0;
- (void)publishPhotosPreviewOperationEventWithType:(id)a0 currentPhoto:(id)a1;
- (void)trackPreviewVCShow:(id)a0 didExposedPhoto:(id)a1;
- (void)open:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (void)transitionToViewController:(id)a0;

@end
