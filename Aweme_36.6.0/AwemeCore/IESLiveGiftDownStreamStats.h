@class NSString;

@interface IESLiveGiftDownStreamStats : NSObject

@property (copy, nonatomic) NSString *canvasName;
@property (nonatomic) double firstFrameTimestamp;
@property (nonatomic) double playTime;
@property (nonatomic) double totalPlayTime;
@property (nonatomic) double secondFrameTimestamp;
@property (nonatomic) long long totalFrames;
@property (nonatomic) double stopTimestamp;
@property (nonatomic) double averageFps;
@property (nonatomic) long long stutterCount;
@property (nonatomic) double stutterRate;
@property (nonatomic) double bigStutterRate;
@property (nonatomic) long long bigStutterCount;
@property (nonatomic) double firstFrameLatency;
@property (nonatomic) double secondFrameLatency;
@property (nonatomic) double finishLoadLynxDuration;
@property (nonatomic) long long lynxLoadFailed;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
