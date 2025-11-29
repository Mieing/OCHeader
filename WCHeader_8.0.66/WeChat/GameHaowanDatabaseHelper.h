@class WCTDatabase, WCTTable;

@interface GameHaowanDatabaseHelper : MMObject {
    WCTDatabase *_db;
    WCTTable *_postInfoTable;
    WCTTable *_mediaInfoTable;
}

@property (readonly, nonatomic) WCTDatabase *db;
@property (readonly, nonatomic) WCTTable *postInfoTable;
@property (readonly, nonatomic) WCTTable *mediaInfoTable;

- (void)loadDatabase;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (BOOL)insertPostInfo:(id)a0;
- (BOOL)insertMediaInfo:(id)a0;
- (BOOL)updatePostInfo:(id)a0;
- (BOOL)updatePostState:(id)a0 toState:(int)a1;
- (BOOL)updateUploadStateWithPostId:(id)a0 toState:(int)a1;
- (id)queryPostInfo:(id)a0;
- (id)queryPostInfo:(id)a0 containsMediaList:(BOOL)a1;
- (BOOL)existPostInfo:(id)a0;
- (id)queryAllPostInfo;
- (BOOL)deletePostInfo:(id)a0;
- (id)queryMediaInfosWithPostId:(id)a0;
- (id)queryMediaInfosWithPostId:(id)a0 mediaType:(unsigned int)a1;
- (BOOL)deleteMediaInfoWithPostId:(id)a0;
- (BOOL)deleteAllPostInfos;
- (BOOL)deleteAllMediaInfos;
- (id)queryAllUncompletedPostInfos;
- (void).cxx_destruct;

@end
