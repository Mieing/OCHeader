@class NSString, NSNumber;
@protocol AWEMusicChartVideoDetailControllerDelegate;

@interface AWEMusicChartVideoDetailController : AWEListDataController

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *chartId;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSNumber *itemId;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *nowRequestMusicId;
@property (copy, nonatomic) NSString *firstMusicId;
@property (weak, nonatomic) id<AWEMusicChartVideoDetailControllerDelegate> delegate;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)initWithSessionId:(id)a0 firstMusicId:(id)a1 chartId:(id)a2 version:(id)a3 itemId:(id)a4;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
