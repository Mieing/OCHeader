@class AVAsset, AVVideoComposition, AVAudioMix;

@interface TAVSource : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAudioMix *audioMix;

- (void)setupAnimationTool:(id)a0;
- (id)convertToPlayerItem;
- (id)printAVComposition;
- (id)printAVVideoComposition;
- (void).cxx_destruct;

@end
