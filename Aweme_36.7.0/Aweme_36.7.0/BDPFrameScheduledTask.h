@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPFrameScheduledTask : NSObject

@property (copy, nonatomic) id /* block */ taskBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long taskID;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) long long triggrtFrequency;
@property (nonatomic) long long triggerTimesLeft;
@property (nonatomic) long long initialTick;
@property (nonatomic) long long execCount;

- (void).cxx_destruct;

@end
