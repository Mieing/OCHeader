@class NSString, NSArray;

@interface ACCStickerCategoryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSArray *categoryIcons;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *effectIDs;
@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (nonatomic) BOOL showAllData;
@property (nonatomic) unsigned long long dataSource;
@property (copy, nonatomic) NSArray *lokiEffects;
@property (copy, nonatomic) NSArray *stickerEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lokiEffectsJSONTransformer;
+ (id)stickerEffectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)dataValid;
- (void).cxx_destruct;

@end
