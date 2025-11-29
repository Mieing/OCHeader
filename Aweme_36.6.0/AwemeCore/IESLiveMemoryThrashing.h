@class NSTimer, NSDictionary, NSString;

@interface IESLiveMemoryThrashing : NSObject <IESLiveStabilityThrashing>

@property (nonatomic) long long preMemorySize;
@property (retain, nonatomic) NSTimer *watchtimer;
@property (retain, nonatomic) NSTimer *increaseWatchtimer;
@property (retain, nonatomic) NSDictionary *memoryMetrics;
@property (nonatomic) int samplingThreshold;
@property (nonatomic) int samplingCount;
@property (nonatomic) BOOL isWatched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thrashing;

- (void)samplingWithPrologue:(id /* block */)a0 sampling:(id /* block */)a1 epilog:(id /* block */)a2;
- (id)configrue;
- (int)thresholdOfPerformance;
- (BOOL)enableSampling;
- (void).cxx_destruct;
- (id)init;
- (void)stopWatching;
- (int)period;

@end
