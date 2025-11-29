@class AVAsset, AVPlayerItem, AVPlayerItemVideoOutput, TPPlayerSlice;

@interface TPAVQueuePlayerSlice : NSObject

@property (retain, nonatomic) TPPlayerSlice *slice;
@property (retain, nonatomic) AVAsset *asset;
@property (retain) AVPlayerItem *playerItem;
@property (nonatomic) long long correctedSliceDuration;
@property (nonatomic) BOOL assetLoaded;
@property (retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput;
@property (retain, nonatomic) AVPlayerItemVideoOutput *VROutput;

- (void).cxx_destruct;

@end
