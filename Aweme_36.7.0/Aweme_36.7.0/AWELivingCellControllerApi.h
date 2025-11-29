@interface AWELivingCellControllerApi : HTSLiveApi

- (void)reportEpisodePVWithEpisodeId:(id)a0 roomId:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 liveReason:(id)a4 ownerUserId:(id)a5;
- (id)p_subCameraParams:(id)a0;
- (void)checkSubCameraStatus:(id)a0 completion:(id /* block */)a1;

@end
