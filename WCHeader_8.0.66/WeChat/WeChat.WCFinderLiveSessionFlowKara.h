@interface WeChat.WCFinderLiveSessionFlowKara : NSObject {
    void /* unknown type, empty encoding */ underlying;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ crashProtected;
    void /* unknown type, empty encoding */ session;
}

- (id)init;
- (void)reportThatEnterDiscoverTabWithIsInHomePage:(BOOL)a0 isHomePageVCCached:(BOOL)a1 predictProbThreshold:(float)a2 onPredict:(id /* block */)a3;
- (void)reportThatEnterDiscoverLiveCell;
- (void)reportThatPreloadLiveHomePage;
- (void).cxx_destruct;

@end
