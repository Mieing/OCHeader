@class NSArray, NSString;

@interface IESCategoryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *aweStickers;
@property (nonatomic) BOOL ieslive_loading;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSArray *normalIconUrls;
@property (copy, nonatomic) NSArray *selectedIconUrls;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *tagsUpdatedTimeStamp;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSArray *effectIDs;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSArray *downloadedEffects;
@property (readonly, copy, nonatomic) NSString *normalIconUri;
@property (readonly, nonatomic) unsigned long long normalIconUrlType;
@property (readonly, copy, nonatomic) NSString *normalIconMD5;
@property (readonly, copy, nonatomic) NSString *selectedIconUri;
@property (readonly, nonatomic) unsigned long long selectedIconUrlType;
@property (readonly, copy, nonatomic) NSString *selectedIconMD5;
@property (readonly, nonatomic) unsigned long long rankingType;
@property (readonly, nonatomic) BOOL isRecommend;
@property (readonly, nonatomic) long long parentCategoryId;
@property (readonly, copy, nonatomic) NSArray *childCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateCategoryWithResponse:(id)a0 isLoadMore:(BOOL)a1;
- (BOOL)showRedDotWithTag:(id)a0;
- (void)markAsReaded;
- (void)updateEffects:(id)a0 collection:(id)a1;
- (void)fillEffectsWithEffectsMap:(id)a0;
- (BOOL)shouldUseIconDisplay;
- (BOOL)isVoipCategory;
- (id)secondaryCategories;
- (void)setSecondaryCategories:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
