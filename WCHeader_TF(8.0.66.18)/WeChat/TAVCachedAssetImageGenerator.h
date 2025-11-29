@class NSMutableDictionary;

@interface TAVCachedAssetImageGenerator : AVAssetImageGenerator

@property (retain, nonatomic) NSMutableDictionary *imageCache;

+ (id)assetImageGeneratorWithAsset:(id)a0;

- (id)initWithAsset:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (struct CGImage { } *)copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (void)generateCGImagesAsynchronouslyForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completeHandle:(id /* block */)a1;
- (BOOL)hasCacheAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)keyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;

@end
