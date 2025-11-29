@class NSArray, CKGenericTemplateCategoryInfo;

@interface CKGenericTemplateCategoryModel : CKBaseResponseModel

@property (copy, nonatomic) CKGenericTemplateCategoryInfo *categoryInfo;
@property (copy, nonatomic) NSArray *templateModels;
@property (copy, nonatomic) NSArray *childrenCategoryInfos;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) long long sortingPosition;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
