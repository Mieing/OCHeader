@interface FavoritesUploadFileSaver : FavoritesUploadBaseProccessor

@property (nonatomic) int uploadState;

- (void)addItem:(id)a0 isPrior:(BOOL)a1;
- (void)removeItem:(id)a0;
- (void)tryProccess;
- (void)onProccessEnd:(BOOL)a0 ErrCode:(int)a1;
- (BOOL)CountItemDataMD5:(id)a0;
- (void)saveCdnInfoOfFavItem:(id)a0;
- (BOOL)doCopyFileInItem:(id)a0;
- (void)clearSourcePath:(id)a0;
- (void)incFileRetainCountForItem:(id)a0;

@end
