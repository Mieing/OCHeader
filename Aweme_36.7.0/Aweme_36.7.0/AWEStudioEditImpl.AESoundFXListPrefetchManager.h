@interface AWEStudioEditImpl.AESoundFXListPrefetchManager : HTSService <AESoundFXListPrefetchManagerProtocol> {
    void /* unknown type, empty encoding */ listNetworkService;
    void /* unknown type, empty encoding */ cachedListResponse;
}

- (void)prefetchListDataWithTabID:(id)a0 extraParams:(id)a1;
- (void)cancelPrefetchRequest;
- (void)clearCachedListData;
- (void).cxx_destruct;
- (id)init;

@end
