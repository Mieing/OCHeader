@class NSString, NSDictionary;

@interface BDXBridgeImOpenSSEMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *notifyEventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *headers;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
