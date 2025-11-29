@class NSObject;
@protocol OS_dispatch_queue, IESLiveEffectPlatformService;

@interface IESLiveBeautyResourceFetcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;

- (void)fetchBeautyResourceWithInfo:(id)a0 textCompletion:(id /* block */)a1 resourceCompletion:(id /* block */)a2;
- (BOOL)isInfoValid:(id)a0;
- (void)fetchMultiCategoryResourceWithInfo:(id)a0 textCompletion:(id /* block */)a1 resourceCompletion:(id /* block */)a2;
- (void)fetchNormalEffectsResourceWithInfo:(id)a0 textCompletion:(id /* block */)a1 resourceCompletion:(id /* block */)a2;
- (void)downloadItemsResource:(id)a0 beautyInfo:(id)a1 completion:(id /* block */)a2;
- (void)parseCategoriesToBeautyItems:(id)a0 beautyInfo:(id)a1 completion:(id /* block */)a2;
- (void)getCategoriesWithInfo:(id)a0 categoriesCompletion:(id /* block */)a1;
- (id)getValidCategory:(id)a0 abGroup:(long long)a1 hasChildCategory:(BOOL)a2;
- (void)fetchEffectListWithCategories:(id)a0 panelName:(id)a1 categoriesCompletion:(id /* block */)a2;
- (void)fetchPanelCategoryListWithInfo:(id)a0 categoriesCompletion:(id /* block */)a1;
- (void)parseEffectsToBeautyItems:(id)a0 beautyInfo:(id)a1 completion:(id /* block */)a2;
- (void)getEffectsWithInfo:(id)a0 effectsCompletion:(id /* block */)a1;
- (void)dealWithResponseModel:(id)a0 info:(id)a1 effectsCompletion:(id /* block */)a2;
- (id)parseBeautyItem:(id)a0 beautyInfo:(id)a1;
- (id)convertEffectToItem:(id)a0 beautyInfo:(id)a1 isChild:(BOOL)a2;
- (void)copyPropertiesFromEffect:(id)a0 toItem:(id)a1;
- (id)parseItemsConfig:(id)a0 mainItem:(id)a1;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
