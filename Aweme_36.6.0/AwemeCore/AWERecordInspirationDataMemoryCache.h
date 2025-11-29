@class NSArray, NSMutableDictionary;

@interface AWERecordInspirationDataMemoryCache : NSObject

@property (retain, nonatomic) NSArray *categoryItems;
@property (retain, nonatomic) NSMutableDictionary *categoryDetailLists;
@property (retain, nonatomic) NSMutableDictionary *categoryDetailIDLists;
@property (retain, nonatomic) NSMutableDictionary *effectCacheLists;
@property (retain, nonatomic) NSMutableDictionary *templateLists;
@property (retain, nonatomic) NSMutableDictionary *searchDetailLists;

- (void)removeAllCache;
- (void)saveEffectModels:(id)a0;
- (id)getEffectID:(id)a0;
- (id)findCategoryDetailListWithCategoryItem:(id)a0;
- (id)findEffectModelWithId:(id)a0;
- (id)findTemplateModelWithId:(id)a0;
- (void)insertCategoryDetail:(id)a0 forItem:(id)a1 location:(long long)a2;
- (void)deleteCategoryDetail:(id)a0 forItem:(id)a1;
- (void)cancelFavorDetail:(id)a0;
- (id)allCategoryItems;
- (void)saveCategoryTabList:(id)a0;
- (id)findCategoryItemWithCategoryId:(long long)a0;
- (void)removeCategoryDetailItem:(id)a0;
- (void)saveCategoryDetailList:(id)a0 forItem:(id)a1;
- (void)insertHeadCategoryDetailList:(id)a0 forItem:(id)a1;
- (id)findSearchDetailModelWithCategoryItem:(id)a0;
- (void)addAndUpdateSearchDetailLists:(id)a0 item:(id)a1;
- (void)saveTemplates:(id)a0;
- (void)removeSearchDetailModel;
- (void).cxx_destruct;

@end
