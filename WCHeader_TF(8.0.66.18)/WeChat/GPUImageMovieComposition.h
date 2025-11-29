@class AVVideoComposition, AVAudioMix, AVComposition;

@interface GPUImageMovieComposition : GPUImageMovie

@property (retain) AVComposition *compositon;
@property (retain) AVVideoComposition *videoComposition;
@property (retain) AVAudioMix *audioMix;

- (id)initWithComposition:(id)a0 andVideoComposition:(id)a1 andAudioMix:(id)a2;
- (id)createAssetReader;
- (void).cxx_destruct;

@end
