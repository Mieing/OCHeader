@interface BDPTimingEvent : NSObject {
    unsigned long long _countingTime;
}

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long duration;

- (void)reStart;
- (id)init;
- (void)stop;
- (BOOL)isStart;
- (void)start;
- (void)reset;

@end
