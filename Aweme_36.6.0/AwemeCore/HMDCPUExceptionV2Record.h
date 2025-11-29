@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface HMDCPUExceptionV2Record : NSObject

@property (nonatomic) BOOL isLowPowerModel;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long thermalState;
@property (nonatomic) long long threadCount;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long processorCount;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) float peakUsage;
@property (nonatomic) float averageUsage;
@property (nonatomic) float configUsage;
@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) unsigned long long isReported;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *customScene;
@property (copy, nonatomic) NSString *possibleScene;
@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSArray *appStates;
@property (copy, nonatomic) NSDictionary *binaryImages;
@property (retain, nonatomic) NSMutableArray *threadsInfo;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSDictionary *filters;
@property (copy, nonatomic) NSString *diagnosingKey;
@property (copy, nonatomic) NSString *sdkVersion;

+ (id)record;
+ (id)tableName;

- (unsigned long long)infoSize;
- (id)threadInfoReportDict;
- (void).cxx_destruct;
- (id)reportDictionary;

@end
