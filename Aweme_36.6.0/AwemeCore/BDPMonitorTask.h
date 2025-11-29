@class NSArray;

@interface BDPMonitorTask : NSObject

@property (copy, nonatomic) NSArray *triggerFrequencys;
@property (nonatomic) long long triggerIndex;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL isStart;

- (void)triggerCallback;
- (id)initWithFrequencys:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
