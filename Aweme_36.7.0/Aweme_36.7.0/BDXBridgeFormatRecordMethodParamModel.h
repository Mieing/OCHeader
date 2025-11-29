@class NSString, NSNumber;

@interface BDXBridgeFormatRecordMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *fileURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *maxDuration;
@property (nonatomic) long long recordStatus;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
