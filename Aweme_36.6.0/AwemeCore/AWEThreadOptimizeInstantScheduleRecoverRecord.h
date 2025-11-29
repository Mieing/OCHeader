@interface AWEThreadOptimizeInstantScheduleRecoverRecord : NSObject

@property (nonatomic) struct pthread_override_s { } *qosOverride;
@property (nonatomic) int originalPriority;
@property (nonatomic) BOOL suspend;

- (id)initWithOriginalPriority:(int)a0;
- (id)initWithQoSOverride:(struct pthread_override_s { } *)a0;
- (id)initBySuspend;
- (void)reset;

@end
