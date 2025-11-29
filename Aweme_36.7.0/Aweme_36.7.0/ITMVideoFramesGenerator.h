@class AVAssetImageGenerator;

@interface ITMVideoFramesGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *generator;

- (void)generateImageWithFile:(id)a0 frames:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (long long)orientationForVideoImage:(id)a0;
- (void).cxx_destruct;

@end
