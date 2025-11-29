@class AWEPublishEditVideoRequestModel, AWEVideoPublishViewModel;

@interface AWEPublishReplaceMusicCreateModelStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEPublishEditVideoRequestModel *requestModel;
@property (nonatomic) long long publishRetryCount;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) double retryInterval;

- (void)setupWithModel:(id)a0;
- (BOOL)canRetryWithError:(id)a0;
- (id)createRequestModel;
- (void)p_run;
- (BOOL)isForbidden:(id)a0;
- (id)publishAweme:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableImageBeatsWithPublishViewModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
