@class NSString, NSArray, NSDictionary;

@interface HMDANRMonitorInfo : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double duration;
@property (nonatomic) double inAppTime;
@property (nonatomic) unsigned long long anrTime;
@property (retain, nonatomic) NSString *stackLog;
@property (nonatomic) BOOL sampleFlag;
@property (nonatomic) BOOL background;
@property (nonatomic) BOOL isLaunch;
@property (nonatomic) BOOL isUITrackingRunloopMode;
@property (nonatomic) double mainThreadCPUUsage;
@property (retain, nonatomic) NSArray *flameGraph;
@property (retain, nonatomic) NSDictionary *binaryImages;

- (void).cxx_destruct;

@end
