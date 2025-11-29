@class NSMutableDictionary, NSMapTable;

@interface AWEAwemeIDsStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *leadingVideosInsertAwemeInfoDict;
@property (retain, nonatomic) NSMutableDictionary *customVideosInsertAwemeInfoDict;
@property (retain, nonatomic) NSMapTable *implementTable;

+ (id)sharedInstance;

- (void)addLeadingVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2;
- (id)leadingVideosInsertQueryParamsForFeed:(long long)a0;
- (id)leadingVideosInfoForFeed:(long long)a0;
- (void)clearLeadingVideosInsertInfoForFeed:(long long)a0;
- (void)addLeadingVideosInsertAwemeIDs:(id)a0 toFeed:(long long)a1;
- (void)addCustomVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2;
- (void)addCustomVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2 completion:(id /* block */)a3;
- (id)leadingVideosInsertAwemeIDsForFeed:(long long)a0;
- (void)addCustomVideosInsertAwemeIDs:(id)a0 toFeed:(long long)a1;
- (void)refreshInsertRoomID:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2;
- (void)addCustomVideosInsertImp:(id)a0 toFeed:(long long)a1;
- (id)customVideoInsertInfoForFeed:(long long)a0;
- (void).cxx_destruct;

@end
