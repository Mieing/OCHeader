@class AVAsset, AVVideoComposition, AVAudioMix;

@interface IESSCScreenPlay : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAudioMix *audioMix;

- (id)convertToPlayerItem;
- (id)printTimeline;
- (id)printAVVideoTimeline;
- (void).cxx_destruct;

@end
