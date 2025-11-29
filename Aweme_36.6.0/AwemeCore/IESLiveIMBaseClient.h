@protocol IESLiveMessageConfig;

@interface IESLiveIMBaseClient : IESLiveIMClientWrapper

@property (retain, nonatomic) id<IESLiveMessageConfig> bizConfig;

- (void)setupHttpFetcherWithConfig:(id)a0;
- (BOOL)isWebsocketFirst;
- (id)initWithConfig:(id)a0 netConfig:(id)a1 decoder:(id)a2;
- (void).cxx_destruct;

@end
