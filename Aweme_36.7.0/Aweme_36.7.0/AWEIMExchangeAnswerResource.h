@class AWEIMMD5ResourceUpdater, NSString, AWEIMExchangeAnswerStrategyConfig;

@interface AWEIMExchangeAnswerResource : NSObject <IESIMExchangeAnswerResourceProtocol>

@property (weak, nonatomic) AWEIMExchangeAnswerStrategyConfig *strategyConfig;
@property (nonatomic) BOOL downloadFailed;
@property (retain, nonatomic) AWEIMMD5ResourceUpdater *updater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataIfNeeded;
- (void)p_fetchData;
- (void)p_tryToLoadResource;
- (void)p_asyncOnGlobalConcurrentQueueWithBlock:(id /* block */)a0;
- (void)p_loadDataWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
