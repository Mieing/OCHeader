@class IESSCMetalBlendFilter, NSObject, IESSCMetalRenderingDevice, IESSCMetalTransformFilter, MPSImageLanczosScale;
@protocol OS_dispatch_semaphore;

@interface IESSCMetalImageRender : NSObject

@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;
@property (retain, nonatomic) IESSCMetalTransformFilter *transformFilter;
@property (retain, nonatomic) MPSImageLanczosScale *scaleImageFilter;
@property (retain, nonatomic) IESSCMetalBlendFilter *blendFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;

+ (id)shared;

- (void)compositingImage:(id)a0 overImage:(id)a1 targetImage:(id)a2;
- (id)renderImage:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 renderSize:(struct CGSize { double x0; double x1; })a2;
- (void)renderImage:(id)a0 toTargetImage:(id)a1 waitUntilCompleted:(BOOL)a2;
- (void)renderImage:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 targetImage:(id)a2 options:(id)a3;
- (void)renderImage:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 targetImage:(id)a2 options:(id)a3 params:(id)a4;
- (void)renderImage:(id)a0 toTargetImage:(id)a1;
- (id)renderImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentMode:(unsigned long long)a2 customTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (void).cxx_destruct;
- (id)init;

@end
