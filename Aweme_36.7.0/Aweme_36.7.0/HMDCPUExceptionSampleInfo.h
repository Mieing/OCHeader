@class NSString, NSArray;

@interface HMDCPUExceptionSampleInfo : NSObject

@property (nonatomic) BOOL isLowPowerModel;
@property (nonatomic) BOOL isBack;
@property (nonatomic) long long thermalModel;
@property (nonatomic) int threadCount;
@property (nonatomic) float averageUsage;
@property (nonatomic) unsigned long long processorCount;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *customScene;
@property (copy, nonatomic) NSArray *threadsInfo;

+ (id)sampleInfo;

- (void).cxx_destruct;

@end
