@class NSString, NSArray;

@interface CKGenericTemplateDetailWrapperModel : CKBaseResponseModel

@property (readonly, nonatomic) long long categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryName;
@property (readonly, copy, nonatomic) NSString *iconURI;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *templateModels;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL hasNext;
@property (readonly, nonatomic) BOOL isDefault;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
