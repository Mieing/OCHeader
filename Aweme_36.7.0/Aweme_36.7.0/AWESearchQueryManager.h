@class NSString, NSMutableArray;

@interface AWESearchQueryManager : NSObject

@property (retain, nonatomic) NSMutableArray *queryArray;
@property (retain, nonatomic) NSMutableArray *gidQueryArray;
@property (copy, nonatomic) NSString *cacheGid;
@property (retain, nonatomic) NSMutableArray *globalQueryArray;
@property (retain, nonatomic) NSString *lastQuery;

+ (id)shareInstance;

- (id)getGlobalSearchedQueryList:(id)a0;
- (void)clearSearchedGidQueryListWithGid:(id)a0;
- (id)getSearchedQueryList;
- (void)saveGidQuery:(id)a0 gid:(id)a1;
- (id)getSearchedGidQueryListWithGid:(id)a0;
- (void)saveQuery:(id)a0 gid:(id)a1 maxCount:(long long)a2 refer:(id)a3;
- (void)saveGlobalQuery:(id)a0 gid:(id)a1 maxCount:(long long)a2 refer:(id)a3;
- (void).cxx_destruct;

@end
