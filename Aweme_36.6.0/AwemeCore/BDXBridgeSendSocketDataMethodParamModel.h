@class NSString;

@interface BDXBridgeSendSocketDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *socketTaskID;
@property (retain, nonatomic) id data;
@property (nonatomic) unsigned long long dataType;

+ (id)requiredKeyPaths;
+ (id)dataTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
