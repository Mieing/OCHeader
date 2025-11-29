@class NSNumber;

@interface AWEIMPolymerizationDiggDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *noticeID;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long diggType;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)getParams;
- (id)initWithNoticeID:(id)a0 noticeType:(long long)a1 diggType:(long long)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
