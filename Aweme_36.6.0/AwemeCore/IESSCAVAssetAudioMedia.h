@class AVAsset, AVAudioMix;

@interface IESSCAVAssetAudioMedia : IESSCAudioMedia

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAudioMix *audioMix;
@property (retain, nonatomic) AVAsset *emptyAsset;
@property (nonatomic) BOOL reverse;

- (id)initWithAsset:(id)a0 audioMix:(id)a1 reverse:(BOOL)a2;
- (void).cxx_destruct;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
