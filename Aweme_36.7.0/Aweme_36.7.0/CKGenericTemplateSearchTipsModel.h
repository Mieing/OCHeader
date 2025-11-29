@class NSArray, NSString;

@interface CKGenericTemplateSearchTipsModel : CKBaseResponseModel

@property (readonly, copy, nonatomic) NSArray *words;
@property (readonly, copy, nonatomic) NSString *searchTips;
@property (readonly, copy, nonatomic) NSString *imprId;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
