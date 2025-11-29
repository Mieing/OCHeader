@class NSArray, NSMutableDictionary, NSString, NSDictionary;

@interface ACCEditorPicTemplateDataContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *picTemplateCacheDict;
@property (copy, nonatomic) NSArray *cacheCategories;
@property (copy, nonatomic) NSString *defalutHotKey;
@property (copy, nonatomic) NSDictionary *imageParsedResultCacheDic;
@property (nonatomic) BOOL isCoverEditNle;
@property (nonatomic) long long videoCoverType;
@property (nonatomic) BOOL videoCoverPersonalizedRecommendation;

+ (id)coverEditShared;
+ (id)editShared;
+ (id)videoCoverEditHorizontalShared;
+ (id)videoCoverEditVerticalShared;

- (void)clearCachedCategoriesForProjectUUID:(id)a0;
- (id)cachedCategoriesForProjectUUID:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)updateCategories:(id)a0 forUUID:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)cacheKeyForProjectUUID:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
