@interface BrandFlowListUtil : NSObject

+ (void)preloadArticleDataIfNeededWithUrls:(id)a0;
+ (int)finderGetCommentScene;
+ (id)convertJSApiImmerseItemList2BrandFlowListModel:(id)a0;
+ (void)assignFeedContentVMForModels:(id)a0 completion:(id /* block */)a1;
+ (void)batchGetFinderObjectsWithExportIdsIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (id)convertExportIds2finderRequestIds:(id)a0;
+ (id)dataItemForExportId:(id)a0 localResults:(id)a1;
+ (id)genNeedSupplyModelWithUsrName:(id)a0;
+ (BOOL)isNeedSupplyWithModels:(id)a0;
+ (id)needSupplyUsrNamesWithModels:(id)a0;

@end
