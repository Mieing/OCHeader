@class NSString, NSArray, NSDictionary;

@interface HMDExceptionRecord : HMDTrackerRecord

@property (nonatomic) long long errorType;
@property (copy, nonatomic) NSString *protectTypeString;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *exceptionLogStr;
@property (copy, nonatomic) NSString *crashKey;
@property (copy, nonatomic) NSArray *crashKeyList;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) long long freeDiskBlockSize;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSDictionary *filterParams;
@property (copy, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSDictionary *settings;

+ (unsigned long long)cleanupWeight;
+ (id)tableName;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
