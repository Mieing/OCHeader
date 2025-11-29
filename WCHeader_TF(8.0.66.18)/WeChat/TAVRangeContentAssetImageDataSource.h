@class AVAsset, TAVCachedAssetImageGenerator, NSString;

@interface TAVRangeContentAssetImageDataSource : NSObject <TAVVideoRangeContentViewDataSource>

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) TAVCachedAssetImageGenerator *imageGenerator;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double widthPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 widthPerSecond:(double)a2;
- (id)initWithAsset:(id)a0 videoComposition:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 widthPerSecond:(double)a3;
- (long long)videoRangeContentViewNumberOfImages:(id)a0;
- (id)videoRangeContent:(id)a0 imageAtIndex:(long long)a1 preferredSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)videoRangeContent:(id)a0 hasCacheAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
