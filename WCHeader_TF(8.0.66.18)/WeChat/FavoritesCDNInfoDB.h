@class MyFavoritesDB;

@interface FavoritesCDNInfoDB : NSObject {
    MyFavoritesDB *_mmDB;
}

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)addCDNInfo:(id)a0;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)a0;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)a0;
- (BOOL)updateCdnInfo:(id)a0;
- (id)getUploadCdnInfoByItemId:(unsigned int)a0 LocalItemDataId:(id)a1 andType:(int)a2;
- (BOOL)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)a0;
- (BOOL)deleteCdnInfo:(id)a0;
- (void).cxx_destruct;

@end
