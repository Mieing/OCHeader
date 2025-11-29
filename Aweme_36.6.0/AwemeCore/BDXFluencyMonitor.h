@class NSMutableDictionary, CADisplayLink;

@interface BDXFluencyMonitor : NSObject

@property (readonly, nonatomic) NSMutableDictionary *records;
@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double targetTimestamp;

+ (void)sendRecord:(id)a0 withStage:(id)a1;
+ (id)sharedInstance;

- (void)startMonitor:(id)a0;
- (void)stopMonitor:(id)a0 withMonitor:(id)a1 platform:(long long)a2 andData:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)onDisplayLink:(id)a0;

@end
