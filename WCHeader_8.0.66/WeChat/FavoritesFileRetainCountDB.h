@class MyFavoritesDB;

@interface FavoritesFileRetainCountDB : NSObject {
    MyFavoritesDB *_mmDB;
}

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)isItemExist:(id)a0 ItemLocalId:(unsigned int)a1 dataFmt:(id)a2;
- (id)getRetainItemByMd5:(id)a0 localId:(unsigned int)a1;
- (BOOL)insertToFileRetainCountTable:(id)a0 ItemLocalId:(unsigned int)a1 dataFmt:(id)a2;
- (BOOL)updateRetainItemBy:(id)a0 localId:(unsigned int)a1 dataFmt:(id)a2;
- (BOOL)deleteItemByMd5:(id)a0 andItemLocalId:(unsigned int)a1;
- (BOOL)isMd5RetainCountZero:(id)a0;
- (id)getRetainMd5ByLocalId:(unsigned int)a0;
- (void).cxx_destruct;

@end
