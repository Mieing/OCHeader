@interface AFDCloseFriendFeedDataManager : NSObject

+ (id)sharedInstance;

- (id)p_commonParam:(id)a0 moment:(id)a1;
- (void)updateMomentGroup:(id)a0 awemeModel:(id)a1;
- (void)p_postRequest:(id)a0 completion:(id /* block */)a1;
- (long long)p_generateSourceParamForServer:(long long)a0;
- (void)loadPreviousMomentWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreMomentWithAwemeModel:(id)a0 completion:(id /* block */)a1;

@end
