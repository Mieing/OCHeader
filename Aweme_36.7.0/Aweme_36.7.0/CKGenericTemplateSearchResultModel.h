@class NSArray, NSString;

@interface CKGenericTemplateSearchResultModel : CKBaseResponseModel

@property (readonly, copy, nonatomic) NSArray *templates;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) long long sortingPosition;
@property (readonly, copy, nonatomic) NSString *searchTips;
@property (readonly, copy, nonatomic) NSString *searchId;
@property (readonly, nonatomic) BOOL fallback;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
