@class AWEShowAdInsertBaseConfig, AWEShowAdInsertToolTracker;

@interface AWEShowInsertAdCenterRequest : NSObject

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEShowAdInsertBaseConfig *config;
@property (retain, nonatomic) AWEShowAdInsertToolTracker *tracker;
@property (copy, nonatomic) id /* block */ currentModel;
@property (copy, nonatomic) id /* block */ clientSideParams;
@property (copy, nonatomic) id /* block */ seriesExtraParams;
@property (copy, nonatomic) id /* block */ currentPoints;
@property (nonatomic) double startRequestTime;
@property (copy, nonatomic) id /* block */ reqMessage;
@property (copy, nonatomic) id /* block */ lastReqMsg;
@property (copy, nonatomic) id /* block */ reqCount;

- (id)initWithInsertConfig:(id)a0;
- (BOOL)enablePlayletInspireEnable;
- (BOOL)enableContinueInspireEnable;
- (void)adModelWithRequestCompletion:(id /* block */)a0;
- (void)requestAdInfoSendWithModel;
- (id)requestInspirePublicParams;
- (void)requestInspireWithMaxRetryCount:(long long)a0 currentRetryCount:(long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (id)requestPublicParams;
- (void)requestWithMaxRetryCount:(long long)a0 currentRetryCount:(long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (id)seriesExtraParametersWithAwemeModel:(id)a0;
- (void)trackRequestWithName:(id)a0 retryCount:(long long)a1 adModel:(id)a2 customParams:(id)a3;
- (BOOL)shouldRetryWithError:(id)a0 currentRetryCount:(long long)a1 maxRetryCount:(long long)a2;
- (void).cxx_destruct;
- (long long)retryTime;

@end
