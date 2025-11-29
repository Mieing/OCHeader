@class NSString;

@interface BDPAppShareBusinessHandler : NSObject <BDPShareEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedHandler;

- (void)handleShareBussinessForChannel:(id)a0 withParams:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void)tokenShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)shareAppInLive:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)shareAppInCustomizedChannel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)defaultShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (id)parseErrorWithError:(id)a0 model:(id)a1;
- (void)videoShareWithParams:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)addMissionInfoWithUniqueID:(id)a0 shareModel:(id)a1;
- (void)anchorShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)trackWithShareError:(id)a0 channel:(id)a1 uniqueID:(id)a2;
- (void)publishCompletedWithModel:(id)a0 uniqueID:(id)a1 result:(long long)a2 channel:(id)a3 error:(id)a4 info:(id)a5 callback:(id /* block */)a6;
- (void)showUserBlockedToastWithUniqueID:(id)a0 resultModel:(id)a1 actionCompletion:(id /* block */)a2;
- (void)afterTalentAnchorRequestSuccessWithResultModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)talentAnchorSharWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)handleBCTypeWithResult:(id)a0 uniqueID:(id)a1;
- (BOOL)isPoiInfoValid:(id)a0;
- (BOOL)videoPermissionABPassListWithPrepareModel:(id)a0 uniqueID:(id)a1;
- (void)videoShareInAppAnchorWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)videoShareInPOIAnchorWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)promiseLoginWithAppID:(id)a0 completion:(id /* block */)a1;
- (id)setAnchorDismissWithExtraParams:(id)a0;
- (void)checkPublishContextWithPrepareModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)startSpecialShareWithPrepareModel:(id)a0 resultModel:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (id)checkVideoPathWithModel:(id)a0 uniqueID:(id)a1;

@end
