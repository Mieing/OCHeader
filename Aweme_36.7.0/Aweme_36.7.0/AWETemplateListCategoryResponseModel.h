@class NSString, NSDictionary;

@interface AWETemplateListCategoryResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
