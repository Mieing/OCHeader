@class WCTDatabase, NSString, WCTTable;

@interface WCCommentWCDB : NSObject

@property (retain, nonatomic) WCTTable *postingCommentTable;
@property (retain, nonatomic) WCTDatabase *dataBase;
@property (copy, nonatomic) NSString *dbPath;

- (id)init;
- (id)initWithDbPath:(id)a0;
- (BOOL)setupDatabase;
- (void)dealloc;
- (void)createTable;
- (BOOL)createPostingCommentTable;
- (id)createTableWithTableName:(id)a0 objectClass:(Class)a1;
- (BOOL)addPostingComment:(id)a0;
- (BOOL)deletePostingComment:(id)a0;
- (BOOL)deleteAllPostingSubCommentWithComment:(id)a0;
- (BOOL)postingCommentSuccessful:(id)a0;
- (BOOL)markPostingCommentFail:(id)a0;
- (id)getPostingFailComment;
- (BOOL)hasPostingFailComment;
- (BOOL)markObjectFailCommentsReadWithTid:(id)a0 scene:(unsigned long long)a1;
- (BOOL)markObjectFailSubCommentsReadWithTid:(id)a0 rootCommentID:(unsigned long long)a1;
- (BOOL)deleteObjectFailCommentWithTid:(id)a0;
- (id)getPostingRootCommentsWithTid:(id)a0 scene:(unsigned long long)a1;
- (id)getPostingSubCommentsWithTid:(id)a0;
- (unsigned long long)getPostingCommentsCountOfTid:(id)a0;
- (unsigned long long)getPostingCommentsTidCount;
- (id)getPostingCommentFailMergeOfTid;
- (id)getPostingFailCommentWithTid:(id)a0 scene:(unsigned long long)a1;
- (BOOL)refreshPostingCommentWithTid:(id)a0 byFetchComments:(id)a1;
- (void).cxx_destruct;

@end
