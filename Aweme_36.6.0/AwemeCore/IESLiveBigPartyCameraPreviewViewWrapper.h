@class IESLiveInteractionLayout, NSString, UIView;

@interface IESLiveBigPartyCameraPreviewViewWrapper : NSObject <IESLiveInteractionSingleViewOptimizationDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (weak, nonatomic) UIView *cameraPreview;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) BOOL isInAnimation;
@property (nonatomic) BOOL fixTargetFrame;
@property (copy, nonatomic) id /* block */ insertingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)layoutTouchableViewWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCameraCornerHidden:(BOOL)a0;
- (void)removeCameraPreview;
- (void)singleViewOptimizationDidEnableWithConfig:(id)a0;
- (void)singleViewOptimizationDidDisableWithConfig:(id)a0;
- (void)singleViewOptimizationDidUpdateCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (id)cameraEffectProvider;
- (void)resumeOrigin;
- (void)resetOriginFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorCameraTargetFrameWithLayout:(id)a0;
- (void)addCameraPreviewToOriginViewStackIfNeeded;
- (void)startWithLayout:(id)a0;
- (void)updateWithCurrentLayout;
- (void)onAnchorPreviewInsertToSlotUsingBlock:(id /* block */)a0;
- (void)regenerateCameraPreview;
- (void).cxx_destruct;
- (void)setup;
- (void)clean;

@end
