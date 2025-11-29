@class NSString, NSDictionary, NSNumber, BDXBridgeAccountFetchHeader;

@interface BDXBridgeAccountFetchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *needUpdateUserInfo;
@property (copy, nonatomic) NSString *callbackSchema;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) BDXBridgeAccountFetchHeader *header;
@property (nonatomic) long long methodName;

+ (id)requiredKeyPaths;
+ (id)headerJSONTransformer;
+ (id)methodNameJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
