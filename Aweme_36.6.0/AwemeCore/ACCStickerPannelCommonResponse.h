@class NSArray, ACCStickerCategoryModel, NSString;

@interface ACCStickerPannelCommonResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCStickerCategoryModel *category;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSArray *needUpdateCategories;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long sortingPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoriesJSONTransformer;
+ (id)categoryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
