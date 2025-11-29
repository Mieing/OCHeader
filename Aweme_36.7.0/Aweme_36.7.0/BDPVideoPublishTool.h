@interface BDPVideoPublishTool : NSObject

+ (id)validColorHexString:(id)a0;
+ (void)sendVideoPublishEvent:(id)a0 channel:(id)a1 from:(id)a2;
+ (void)uploadUserInfoWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)sendVideoMountEvent:(id)a0 channel:(id)a1 from:(id)a2;
+ (id)generateSchemaQuery:(id)a0 uniqueID:(id)a1;
+ (void)getUserNickNamesWithOpenId:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (void)getUserIdWithOpenId:(id)a0 uniqueId:(id)a1 completion:(id /* block */)a2;
+ (void)requestVideoPublishModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (void)showLoadingViewIfNeed:(id)a0;
+ (id)talentAppId:(id)a0;
+ (id)updatePrepareModel:(id)a0 data:(id)a1 uniqueID:(id)a2;
+ (void)sendVideoEvent:(id)a0 uniqueID:(id)a1 from:(id)a2 channel:(id)a3;
+ (id)getVideoSceneParam:(id)a0 from:(id)a1 channel:(id)a2;
+ (void)trackEventWithFrom:(id)a0 uniqueID:(id)a1;
+ (id)getPublishFromWithFrom:(id)a0;

@end
