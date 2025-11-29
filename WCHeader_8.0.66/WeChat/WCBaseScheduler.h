@class WCPlayerPlaybackInfo, WCPlayerPlayArgs;

@interface WCBaseScheduler : NSObject

@property (nonatomic) double sliceTime;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int byteRate;
@property (nonatomic) unsigned int networkSpeed;
@property (nonatomic) unsigned long long lastRequestTime;
@property (nonatomic) unsigned long long networkUpdateTime;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;
@property (nonatomic) double threshold;
@property (nonatomic) double bufferLimit;

- (id)initWithPlayerArgs:(id)a0 playbackInfo:(id)a1;
- (double)getNextDownloadTimeWhenPause;
- (double)getNextDownloadTimeWhenPlaying;
- (BOOL)isCanImproveBaseBuffer;
- (BOOL)isInPreloadLimitTime:(id)a0;
- (void).cxx_destruct;

@end
