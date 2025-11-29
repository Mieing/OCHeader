@class WCFinderStreamLoadingState, WCFinderGetRelatedListParams, NSString;

@interface WCFinderProfileSearchFeedFetcher : NSObject <WCFinderProfileDataFetcher>

@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderStreamLoadingState *profileLoadingState;
@property (retain, nonatomic) WCFinderStreamLoadingState *profilePullingState;
@property (retain, nonatomic) WCFinderGetRelatedListParams *params;
@property (nonatomic) BOOL firstPageFetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionId:(id)a0 encryptTid:(id)a1 nonceId:(id)a2 scene:(int)a3 reportModel:(id)a4 topHasMore:(BOOL)a5;
- (id)createParams:(id)a0 encryptTid:(id)a1 nonceId:(id)a2 reportModel:(id)a3;
- (void)profileRequestFirstPage:(id)a0 complete:(id /* block */)a1;
- (void)profileRequestNextPage:(id)a0 complete:(id /* block */)a1;
- (void)profileRequestPrePage:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
