@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVVideoComposition;

@interface IESSCAVAssetReaderImageMedia : IESSCImageMedia

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderOutput *trackOutput;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReaderTime;
@property (nonatomic) struct opaqueCMSampleBuffer { } *lastSampleBuffer;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;

- (void)cleanReader;
- (struct opaqueCMSampleBuffer { } *)loadSampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)createAssetReaderOutputAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithAsset:(id)a0 videoComposition:(id)a1;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;

@end
