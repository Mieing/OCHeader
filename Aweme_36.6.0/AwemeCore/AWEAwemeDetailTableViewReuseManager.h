@class YYMemoryCache;

@interface AWEAwemeDetailTableViewReuseManager : NSObject

@property (retain, nonatomic) YYMemoryCache *tableViewPool;

+ (id)shareInstance;

- (BOOL)enableReuse;
- (void)setupReuseTableView:(id)a0 referString:(id)a1;
- (id)acquireReuseTableViewWithReferString:(id)a0;
- (void)trackerReuseResult:(BOOL)a0 referString:(id)a1;
- (void).cxx_destruct;

@end
