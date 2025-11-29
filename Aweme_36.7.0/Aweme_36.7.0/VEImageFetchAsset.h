@class NSArray, NSString;
@protocol VEImageFetchAssetDelegate;

@interface VEImageFetchAsset : NSObject <VEFetchAssetProtocol>

@property (nonatomic) struct __CVBuffer **pixelCache;
@property (weak, nonatomic) id<VEImageFetchAssetDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } previewBounds;
@property (retain, nonatomic, setter=updateImages:) NSArray *images;
@property (readonly, nonatomic) long long totalDuration;
@property (nonatomic) long long fps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)fetchImageWithBound:(struct CGSize { double x0; double x1; })a0 pts:(double)a1;
- (void)asynFetchImageWithBound:(struct CGSize { double x0; double x1; })a0 pts:(double)a1 effectPts:(double)a2 completeBlock:(id /* block */)a3;
- (id)initWithImagesPreviewBoundSize:(struct CGSize { double x0; double x1; })a0 images:(id)a1 framerate:(long long)a2;
- (struct __CVBuffer { } *)fetchPreviewImageWithPts:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
