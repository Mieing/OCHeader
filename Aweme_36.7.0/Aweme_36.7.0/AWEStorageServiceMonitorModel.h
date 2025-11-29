@class NSString;

@interface AWEStorageServiceMonitorModel : NSObject

@property (nonatomic) BOOL noAmendVersion;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double occurrenceTime;
@property (nonatomic) long long monitorType;
@property (nonatomic) long long opreationType;
@property (nonatomic) long long size;
@property (nonatomic) double totalTime;
@property (copy, nonatomic) NSString *errorInfo;
@property (nonatomic) BOOL mainThread;
@property (nonatomic) BOOL success;
@property (nonatomic) long long inputType;
@property (nonatomic) long long moduleName;
@property (copy, nonatomic) NSString *stackInfo;
@property (nonatomic) double serializeStart;
@property (nonatomic) double serializeFinish;
@property (nonatomic) double deSerializeStart;
@property (nonatomic) double deSerializeFinish;
@property (nonatomic) double IOStart;
@property (nonatomic) double IOFinish;

+ (id)buildVersion;

- (id)modelToDictionary;
- (id)appVersionConvertToBuildVersion:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
