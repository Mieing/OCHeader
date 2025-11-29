@protocol BDPAwemeRankListPluginDelegate;

@interface BDPPluginRankList_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) id<BDPAwemeRankListPluginDelegate> rankListPlugin;

- (BOOL)isLogin:(id)a0;
- (void)getImRankListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getImRankDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setImRankDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
