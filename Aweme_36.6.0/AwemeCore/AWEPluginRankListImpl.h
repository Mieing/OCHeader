@class NSString;

@interface AWEPluginRankListImpl : NSObject <BDPAwemeRankListPluginDelegate>

@property (nonatomic) BOOL hasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)bussinessErrorWithError:(id)a0 data:(id)a1;
- (void)showRankListViewWithModelIfNeed:(id)a0 uniqueID:(id)a1 error:(id)a2;
- (void)bdp_openRankListForUniqueID:(id)a0 withParam:(id)a1 completion:(id /* block */)a2;
- (void)bdp_getRankDataForUniqueID:(id)a0 withParam:(id)a1 completion:(id /* block */)a2;
- (void)bdp_setRankDataForUniqueID:(id)a0 withParam:(id)a1 completion:(id /* block */)a2;

@end
