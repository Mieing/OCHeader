@class NSString, NSArray, NSNumber, NSMutableArray;

@interface AWEMixVideoCollectionListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *noticeID;
@property (copy, nonatomic) NSString *mixID;
@property (retain, nonatomic) NSMutableArray *itemIDs;
@property (retain, nonatomic) NSMutableArray *noticeUsers;
@property (nonatomic) BOOL hasJumpLoad;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSArray *insertCollectedUserIDs;

- (void)loadmoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (id)filterDuplicateAwemeModels:(id)a0;
- (void)updateDataSourceWithFilterArray:(id)a0;
- (id)initWithMixID:(id)a0 noticeID:(id)a1;
- (void)cleanNoticeUsers;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
