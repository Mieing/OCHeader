@class NSString, NSMutableArray, FavoritesFileRetainCountDB;

@interface FavoritesFileMgr : MMUserService <MMServiceProtocol> {
    FavoritesFileRetainCountDB *_frcDB;
    NSMutableArray *m_checkFileItemIdList;
}

@property (nonatomic) BOOL forbidCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)incFileRetainCountByMd5:(id)a0 andItemLocalId:(unsigned int)a1 dataFmt:(id)a2;
- (BOOL)decFileRetainCountByMd5:(id)a0 IsThumb:(BOOL)a1 ItemLocalId:(unsigned int)a2 DataFmt:(id)a3;
- (void)addItemToCheckFileList:(id)a0;
- (id)getRetainMd5ByLocalId:(unsigned int)a0;
- (void)checkAndCleanUnRetainFileWithFavItem:(id)a0;
- (void).cxx_destruct;

@end
