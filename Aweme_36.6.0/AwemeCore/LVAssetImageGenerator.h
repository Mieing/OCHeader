@class AVAssetImageGenerator, AVAsset;

@interface LVAssetImageGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *generator;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (id)initWithAsset:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)generaImageWithEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;

@end
