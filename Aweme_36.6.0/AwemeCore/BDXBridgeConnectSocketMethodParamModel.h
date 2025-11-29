@class NSString, NSDictionary, NSArray;

@interface BDXBridgeConnectSocketMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSArray *protocols;
@property (nonatomic) unsigned long long preferredReceivedDataType;

+ (id)requiredKeyPaths;
+ (id)preferredReceivedDataTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
