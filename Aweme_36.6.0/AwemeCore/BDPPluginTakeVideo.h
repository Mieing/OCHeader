@interface BDPPluginTakeVideo : BDPBridgeInstancePlugin

- (long long)getVideoDuration:(id)a0;
- (id)getCustomStickersListWithArray:(id)a0 uniqueID:(id)a1;
- (void)getAlaisIdWithAppId:(id)a0 withVideoId:(BOOL)a1 completion:(id /* block */)a2;
- (void)uploadDouyinVideoDirectlyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
