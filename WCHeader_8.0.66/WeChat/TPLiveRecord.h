@class TPTimer, TPTimeTracker;

@interface TPLiveRecord : NSObject

@property (retain, nonatomic) TPTimer *livePeroidTimer;
@property (retain, nonatomic) TPTimeTracker *liveBufferingTracker;
@property (nonatomic) long long peroidBufferedDurationMs;
@property (nonatomic) long long peroidBufferedCount;
@property (nonatomic) long long prepareStartTime;
@property (nonatomic) long long prepareEndTime;

- (void).cxx_destruct;

@end
