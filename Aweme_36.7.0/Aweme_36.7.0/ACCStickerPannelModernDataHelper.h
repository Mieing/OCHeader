@interface ACCStickerPannelModernDataHelper : NSObject

+ (void)fetchIMStoreStickerListWithRequest:(id)a0 completion:(id /* block */)a1;
+ (long long)preferredPageCount;
+ (void)fetchInfoStickerTabCategoryData:(id)a0 needCheckUpdate:(BOOL)a1 completion:(id /* block */)a2;
+ (void)fetchStickerPanelInfo:(id)a0 needCheckUpdate:(BOOL)a1 completion:(id /* block */)a2;
+ (void)setArtistCommonRequestModel:(id)a0 fromAccCommonRequest:(id)a1;
+ (id)artistCategoryDataResultWithResponse:(id)a0;
+ (void)fetchArtistStickerTabList:(id)a0 toCache:(BOOL)a1 completion:(id /* block */)a2;
+ (void)fetchArtistStickerCategories:(id)a0 toCache:(BOOL)a1 completion:(id /* block */)a2;
+ (id)resultForStickerResponse:(id)a0;
+ (void)fetchStickerPanelInfo:(id)a0 completion:(id /* block */)a1;
+ (id)resultForLokiResponse:(id)a0;
+ (void)fetchInfoStickerTabCategoryData:(id)a0 completion:(id /* block */)a1;
+ (id)resultForIMStickerResponse:(id)a0;
+ (BOOL)shouldFilterTags:(id)a0 filterTags:(id)a1;
+ (id)categoryForLokiCategory:(id)a0;
+ (unsigned long long)categoryDataSourceForLokiCategory:(id)a0;
+ (void)fetchArtistStickerCategoriesWithUpdate:(id)a0 completion:(id /* block */)a1;
+ (void)fetchArtistStickerCategoriesFromCache:(id)a0 completion:(id /* block */)a1;
+ (void)fetchArtistStickerTabListFromCache:(id)a0 completion:(id /* block */)a1;
+ (void)fetchStickerPanelInfoFromCache:(id)a0 completion:(id /* block */)a1;
+ (void)fetchInfoStickerTabCategoryDataFromCache:(id)a0 completion:(id /* block */)a1;
+ (void)fetchInfoStickerZaiZaiListWith:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCustomStickerListWithCompletion:(id /* block */)a0;
+ (void)fetchFavoriteIMStickerListWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)deleteCustomSticker:(id)a0 completion:(id /* block */)a1;
+ (void)filterCategoryModel:(id)a0 withFilterTags:(id)a1;

@end
