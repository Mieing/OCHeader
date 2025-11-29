@class NSString, NSArray, NSDictionary;

@interface AWEECShoppingGuideWelcomeInfoResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *sugList;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *welcomeInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
