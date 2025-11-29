@class NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveLinkNodeContext : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curCapturePts;
@property (nonatomic) long long videoFrameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preMixVideoPts;
@property (nonatomic) BOOL enableCapturePtsOptimize;

+ (id)sharedVideoProcessingContext;
+ (id)sharedAudioProcessingContext;
+ (id)sharedVideoContextQueue;
+ (id)sharedAudioContextQueue;

- (void)resetVideoPts;
- (void).cxx_destruct;
- (id)init;

@end
