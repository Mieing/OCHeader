@class MyFavoritesDB;

@interface FavoritesItemDB : NSObject {
    MyFavoritesDB *_mmDB;
}

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)runTransaction:(id /* block */)a0;
- (BOOL)getFavoritesItemValue:(id)a0 fromDBItem:(id)a1;
- (void)fillDBFavItem:(id)a0 fromFavItem:(id)a1;
- (void)fillDBFavItem:(id)a0 fromFavItem:(id)a1 xml:(id)a2;
- (void)fillDBFavItem:(id)a0 fromFavObject:(id)a1;
- (void)fillItemsArray:(id)a0 withDBItems:(id)a1;
- (void)fillLegalItemsArray:(id)a0 withDBItems:(id)a1;
- (BOOL)insertNewRowInFavoritesItem:(id)a0 XML:(id)a1;
- (id)getDBItemById:(unsigned int)a0;
- (id)getFavoritesItemById:(unsigned int)a0;
- (id)getFavoritesItemByLocalId:(unsigned int)a0;
- (id)getFavoritesItemByLocalIdArr:(id)a0;
- (id)getFavoritesItemBySourceId:(id)a0;
- (id)getFavoritesItemsWithTagIdLimit:(int)a0 offset:(int)a1;
- (BOOL)deleteFavoritesItemById:(unsigned int)a0;
- (BOOL)deleteFavoritesItemByLocalItemId:(unsigned int)a0;
- (BOOL)getUploadingItemList:(id)a0;
- (BOOL)getDownloadingItemList:(id)a0;
- (BOOL)getUploadFailedItemList:(id)a0;
- (BOOL)getDownloadFailedItemList:(id)a0;
- (BOOL)existBeforeAsyncUploadingItem;
- (BOOL)getBeforeAsyncUploadingItem:(id)a0;
- (BOOL)updateItemInFavItemDB:(id)a0;
- (BOOL)updateItemInFavItemDBByFavObject:(id)a0;
- (id)getAllCapacityType;
- (BOOL)getFirstPageFavoritesItemList:(id)a0 byType:(int)a1 andPinTopFirst:(BOOL)a2;
- (BOOL)getNextPageFavoritesItemList:(id)a0 byType:(int)a1 andCurMinUpdateTime:(unsigned int)a2 andPinTopFirst:(BOOL)a3 byCurMinPinTopTime:(unsigned int)a4;
- (BOOL)getFirstPageFavoritesByType:(id)a0 byType:(int)a1 andSortType:(int)a2;
- (BOOL)getNextPageFavoritesByType:(id)a0 byType:(int)a1 andSortType:(int)a2 andMinDataSize:(unsigned long long)a3 andUsedTimes:(unsigned int)a4 andCurMinUpdateTime:(unsigned int)a5;
- (BOOL)getNeedBatchGetFavoritesItemList:(id)a0 byType:(int)a1 andMinUpdateTime:(unsigned int)a2;
- (unsigned int)getNeedBatchGetFavoritesItemCount;
- (BOOL)updateUpdateSeq:(unsigned int)a0 ByFavId:(unsigned int)a1;
- (BOOL)updateItemUpdateTime:(unsigned int)a0 ByLocalId:(unsigned int)a1;
- (BOOL)updateItemPinTopTimestamp:(unsigned int)a0 ByLocalId:(unsigned int)a1;
- (int)getItemPinTopTimestampByLocalId:(unsigned int)a0;
- (BOOL)getAllFavoritesItems:(id)a0;
- (id)checkBeforeAddItemByFavId:(unsigned int)a0 andLocalId:(unsigned int)a1;
- (BOOL)getAsyncUploadingItemList:(id)a0;
- (BOOL)getAsyncUploadFailedItemList:(id)a0;
- (BOOL)getNeedCacheWebItem:(id)a0;
- (BOOL)updateItemLocalStatus:(id)a0;
- (BOOL)updateItemUsedTimes:(id)a0;
- (BOOL)getDeletedItemList:(id)a0;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)a0;
- (BOOL)getFavoritesItemList:(id)a0 From:(unsigned int)a1 Limit:(int)a2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)a0 Limit:(int)a1;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)a0 Limit:(int)a1;
- (unsigned int)getLastFavItemLocalId;
- (void).cxx_destruct;

@end
