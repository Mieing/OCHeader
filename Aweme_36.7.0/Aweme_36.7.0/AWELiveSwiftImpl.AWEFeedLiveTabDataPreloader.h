@class _TtC16AWELiveSwiftImpl27AWEFeedLiveTabDataPreloader;

@interface AWELiveSwiftImpl.AWEFeedLiveTabDataPreloader : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ waitClear;
    void /* unknown type, empty encoding */ clearTimer;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ tabCompletion;
    void /* unknown type, empty encoding */ revisitCompletion;
    void /* unknown type, empty encoding */ allCompletion;
    void /* unknown type, empty encoding */ preloadMultiTabDataCenter;
    void /* unknown type, empty encoding */ preloadRevisitDataCenter;
}

@property (class, nonatomic, readonly) _TtC16AWELiveSwiftImpl27AWEFeedLiveTabDataPreloader *shared;

@property (nonatomic) BOOL hasInitFetch;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)preloadLiveTabWithModel:(id)a0;
- (void)configPreloadWithTabCompletion:(id /* block */)a0 revisitCompletion:(id /* block */)a1 allCompletion:(id /* block */)a2;
- (id)currentPreloadModel;
- (void)clearPreloadDataWithReason:(id)a0;
- (id)getMultiTabDataCenter;
- (id)getRevisitDataCenter;
- (void).cxx_destruct;
- (id)init;

@end
