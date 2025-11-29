@class NSArray, NSDictionary, NSString;

@interface AWEHistoryTemplateListTemplateInfoResponseModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templateList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
