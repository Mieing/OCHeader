@class AVAssetImageGenerator, NSString;

@interface DVESystemAssetImageGeneratorWrapper : NSObject <DVEFrameGeneratorProtocol>

@property (retain, nonatomic) AVAssetImageGenerator *innerImageGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generaImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)imageFromCGImage:(struct CGImage { } *)a0;
- (id)initWithAsset:(id)a0 resourceSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)cancelAllCGImageGeneration;

@end
