@protocol WCPreloadProviderDelegate;

@interface WCPreloadProvider : MMObject <PBMessageObserverDelegate> {
    BOOL isWorking;
    unsigned long long uiClientLatestID;
}

@property (weak, nonatomic) id<WCPreloadProviderDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)converListToList:(id)a0;
- (int)getNetworkType;
- (void)requestForSnsTimeLineRequest:(id)a0 minID:(id)a1 lastRequestTime:(unsigned int)a2;
- (BOOL)responseForSnsTimeLineResponse:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)preloadHeadWithLatestID:(id)a0;
- (void).cxx_destruct;

@end
