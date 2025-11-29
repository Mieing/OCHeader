@class NSString, UIImage, AVURLAsset, NSURL, PHLivePhoto;

@interface CECMomentCameraUploadLivePhotoResourceImpl : NSObject <CECMomentCameraUploadLivePhotoResource>

@property (retain, nonatomic) PHLivePhoto *originalLivePhoto;
@property (retain, nonatomic) UIImage *parsedImage;
@property (retain, nonatomic) AVURLAsset *parsedVideo;
@property (retain, nonatomic) NSURL *parsedVideoURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayRect;
@property (readonly, nonatomic) UIImage *croppedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOriginalLivePhoto:(id)a0;
- (void)updateUploadLivePhotoDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)parseLivePhotoWithCompletion:(id /* block */)a0;
- (id)p_cropImageWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)p_resizeImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resetRectIfNeeded:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
