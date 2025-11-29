@class NSString, NSArray, NSDictionary;

@interface AWETemplateFetchCategoriesResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSArray *categoryData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
