@class NSString, NSDictionary, AWESearchFrequencyManager, AWEUserSearchDoodleConfigModel;
@protocol AWEHttpTask;

@interface AWEUserPersonalSearchDataController : AWEListDataController

@property (nonatomic) long long offset;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSDictionary *logPassBack;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *searchChannel;
@property (nonatomic) BOOL enableHistory;
@property (retain, nonatomic) AWEUserSearchDoodleConfigModel *doodleConfig;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofArray:(id)a1;
- (void)requestWithOffset:(long long)a0 count:(long long)a1 channel:(id)a2 completion:(id /* block */)a3;
- (void)loadRecommendedVideoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
