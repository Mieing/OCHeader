@class FTSDB, NSMutableSet;

@interface FTSFavDB : NSObject {
    FTSDB *_database;
}

@property (retain, nonatomic) NSMutableSet *favOriginalTag;
@property (nonatomic) BOOL hasCheckOriginTags;
@property (nonatomic) BOOL checkOriginTagsSuccess;

- (BOOL)initDB:(id)a0;
- (unsigned int)getAllIndexCount;
- (void)dealloc;
- (void)checkFTS5State;
- (BOOL)haveFTS5Index:(id)a0;
- (unsigned int)getMaxFavFts5UpdateSeq;
- (unsigned int)getMaxUnsyncLocalId;
- (BOOL)insertOrUpdateRowsInFavFTS5Table:(id)a0 updateCount:(unsigned int *)a1;
- (BOOL)deleteRowsInFavFTS5Table:(id)a0;
- (id)queryTextInFavFTS5Table:(id)a0 byType:(long long)a1 tags:(id)a2 cancelBlock:(id /* block */)a3;
- (BOOL)clearFavFTS5Table;
- (BOOL)clearFavFTS3Table;
- (BOOL)updateOldFavTag:(id)a0 toNewFavTag:(id)a1;
- (BOOL)updateTagIndexFor:(id)a0;
- (id)getAllFavTag;
- (id)getTagsMatch:(id)a0;
- (id)getFavItemLocalIdByTag:(id)a0;
- (id)getFavOriginTagPath;
- (void)loadFavOriginTags;
- (void)saveFavOriginTags;
- (void)appendTagOf:(id)a0;
- (void)checkWithOriginTags:(id)a0 needSaveFlag:(BOOL)a1;
- (id)getOriginTag:(id)a0;
- (void)saveWithOriginalTags:(id)a0 needSaveFlag:(BOOL)a1;
- (void).cxx_destruct;

@end
