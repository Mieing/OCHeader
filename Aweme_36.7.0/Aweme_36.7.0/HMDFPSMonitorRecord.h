@class NSDictionary;

@interface HMDFPSMonitorRecord : HMDMonitorRecord

@property (nonatomic) double fps;
@property (nonatomic) BOOL sceneInSwitch;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isLowPowerMode;
@property (retain, nonatomic) NSDictionary *fpsExtralValue;
@property (nonatomic) unsigned long long refreshRate;

+ (unsigned long long)cleanupWeight;
+ (id)aggregateDataWithRecords:(id)a0;

- (void).cxx_destruct;
- (double)value;
- (id)reportDictionary;

@end
