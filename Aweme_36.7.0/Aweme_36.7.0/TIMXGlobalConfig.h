@class NSArray, NSString;

@interface TIMXGlobalConfig : NSObject

@property BOOL isDouyinTargetSet;
@property (nonatomic) BOOL enableThreadSafeDictionaryOptimize;
@property (nonatomic) BOOL avoidMonitorRepeatingRecordEnd;
@property (nonatomic) BOOL conversationORMKVOCrashFix;
@property (nonatomic) BOOL enableMessageOrmCreatedAtOpt;
@property (nonatomic) BOOL enableConvExtOpt;
@property (nonatomic) BOOL needWriteOldConvExt;
@property (nonatomic) double convExtCheckDelayTime;
@property (nonatomic) double convExtReportInterval;
@property (nonatomic) double convExtConsistencyReportSample;
@property (nonatomic) double convExtNotConsistencyReportSample;
@property (copy, nonatomic) NSArray *coreExtWhiteList;
@property (copy, nonatomic) NSArray *settingExtWhiteList;
@property (copy, nonatomic) NSString *migratePrefixKey;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
