@class AVAsset, VEAudioReader, VEAudioConfig;

@interface VEAudioClip : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) VEAudioConfig *audioConfig;
@property (retain, nonatomic) VEAudioReader *audioReader;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *bufferList;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (weak, nonatomic) VEAudioClip *cacheClip;
@property (nonatomic) BOOL isCachedClip;

- (void)updateClipRange:(id)a0;
- (id)initWithAsset:(id)a0 audioConfig:(id)a1;
- (void)updateConfig:(id)a0 discardDecodedBuffer:(BOOL)a1;
- (void).cxx_destruct;

@end
