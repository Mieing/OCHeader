@class NSString;

@interface CECMomentCameraImageDownloadHandler : NSObject <CECMomentCameraImageDownloadHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mixtureMapAndAvatarWithMapImage:(id)a0 withAvatarView:(id)a1 withNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)addWatermarkToPicture:(id)a0 watermarkImage:(id)a1 watermarkString:(id)a2;
+ (id)mixtureImageWithModel:(id)a0;
+ (id)addExifAuthorDataForImage:(id)a0;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })createBuffer:(struct CGImage { } *)a0;
+ (id)generateMomentMemoryCoverImage:(id)a0 isOwnMoment:(BOOL)a1;
+ (id)applyGaussianBlurWithImage:(id)a0 radius:(double)a1;


@end
