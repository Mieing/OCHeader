@class NSString;

@interface CKGenericTemplateCategoryInfo : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryName;
@property (readonly, copy, nonatomic) NSString *iconURI;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) long long isEnterprise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
