@class NSDictionary, NSSet;

@interface IESLivePowerDissipationConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableBacktrace;
@property (nonatomic) BOOL reportSlardar;
@property (nonatomic) BOOL reportAlog;
@property (copy, nonatomic) NSDictionary *threadConfig;
@property (nonatomic) BOOL recordPage;
@property (nonatomic) BOOL enableDistribute;
@property (nonatomic) BOOL safeSync;
@property (nonatomic) float appCPUThreshold;
@property (nonatomic) float threadCPUStackThreshold;
@property (nonatomic) long long memberCount;
@property (retain, nonatomic) NSSet *threadStackBlackList;
@property (nonatomic) BOOL enableThreadUsage;
@property (nonatomic) BOOL enableThreadPriority;
@property (nonatomic) BOOL enableContentType;
@property (nonatomic) BOOL enableGPU;
@property (nonatomic) float gpuThreshold;
@property (nonatomic) long long gpuSampleTimeLimit;

+ (id)settingConfig;
+ (id)configFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
