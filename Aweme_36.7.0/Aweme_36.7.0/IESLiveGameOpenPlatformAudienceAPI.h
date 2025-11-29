@class NSString;

@interface IESLiveGameOpenPlatformAudienceAPI : IESLiveGameOpenPlatformCommonAPI <IESLiveGameOpenPlatformAudienceOpenAPIServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendAppID:(id)a0 message:(id)a1 toAnchorWithExtra:(id)a2 callback:(id /* block */)a3;
- (void)requestFollowStatusForAnchorWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestCheckImInfoWithAppId:(id)a0 requestID:(id)a1 adParams:(id)a2 imExtra:(id)a3 callback:(id /* block */)a4;
- (void)requestIsFavoriteGameWithAppId:(id)a0 callback:(id /* block */)a1;
- (void)requestaAddGameToFavoritesWithAppId:(id)a0 callback:(id /* block */)a1;
- (void)requestExplainCardInfoWithRoomId:(id)a0 callback:(id /* block */)a1;

@end
