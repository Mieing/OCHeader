@class MPChannelGetEntryDataReq;

@interface MPChannelGetEntryDataTask : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) MPChannelGetEntryDataReq *request;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithReq:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)handleChannelEntryDataResp:(id)a0;
- (void)callbackCompletionIsSuccess:(BOOL)a0 entryData:(id)a1 strategyInfo:(id)a2;
- (unsigned long long)covertAppDebugModeFromRespVersion:(int)a0;
- (int)covertSceneToPbScene:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
