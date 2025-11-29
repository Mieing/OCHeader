@class NSDictionary, NSString, NSNumber;

@interface AWEHPHambSettingsDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDictionary *traceInfo;
@property (copy, nonatomic) NSDictionary *userConfig;
@property (copy, nonatomic) NSDictionary *deviceConfig;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSNumber *cmdVersion;
@property (copy, nonatomic) NSString *dataHash;
@property (copy, nonatomic) NSString *logID;

+ (id)modelWithRawData:(id)a0 userID:(id)a1 error:(id *)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)simplifyCheckWithError:(id *)a0;
- (BOOL)completionCheckWithError:(id *)a0;
- (void).cxx_destruct;

@end
