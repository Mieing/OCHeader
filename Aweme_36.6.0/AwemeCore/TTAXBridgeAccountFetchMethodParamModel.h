@class NSString, NSDictionary;

@interface TTAXBridgeAccountFetchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSString *callbackSchema;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
