@interface AWEKnowledgeSwiftImpl.HangoutSingleFeedDataController : AWEListDataController <AFDFullPageFeedDataControllerMonitorProtocol> {
    void /* unknown type, empty encoding */ requestedItemSet;
    void /* unknown type, empty encoding */ payload;
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ fromItem;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ latestRank;
}

@property (nonatomic) long long pullCount;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
