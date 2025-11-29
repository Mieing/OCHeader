@class NSString, NSArray, NSDictionary;

@interface AWEECShoppingGuideInputSugResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSArray *recommendInputs;
@property (copy, nonatomic) NSArray *hitKeywords;
@property (copy, nonatomic) NSString *baseUrl;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
