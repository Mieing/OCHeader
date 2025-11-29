@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformCommonAPI : HTSLiveApi <IESLiveGameOpenPlatformCommonOpenAPIServiceInterface, IESLiveGameOpenPlatformFoundationAPIServiceInterface>

@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ packExtraMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)openAPIBaseURL;
- (void)buildRequestWithPath:(id)a0 params:(id)a1 useBaseURL:(BOOL)a2 requestMethod:(unsigned long long)a3 respClass:(Class)a4 extraConfig:(id)a5 respCallback:(id /* block */)a6;
- (void)requestAppStartWithAppId:(id)a0 source:(long long)a1 extra:(id)a2 openExtra:(id)a3 callback:(id /* block */)a4;
- (void)requestAppStopWithAppId:(id)a0 startId:(id)a1 extra:(id)a2 stopXPlayInfo:(id)a3 callback:(id /* block */)a4;
- (void)requestShowAppPanelStatusWithAppId:(id)a0 roomId:(id)a1 callback:(id /* block */)a2;
- (void)requestHideAppPanelStatusWithAppId:(id)a0 roomId:(id)a1 callback:(id /* block */)a2;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)requestStartGame:(id)a0 gameID:(int)a1 roomID:(id)a2 isInDebugRoom:(BOOL)a3 launchSource:(unsigned long long)a4 callback:(id /* block */)a5;
- (void)requestStopGame:(long long)a0 appID:(id)a1;
- (void)trackOpenApiWithUrl:(id)a0 params:(id)a1 error:(id)a2;
- (void)handleHitSharkWithPath:(id)a0 error:(id)a1 headerExtra:(id)a2 callback:(id /* block */)a3;
- (void)requestDiamondsPayV3WithAppID:(id)a0 orderID:(id)a1 diamonds:(long long)a2 payTag:(id)a3 callback:(id /* block */)a4;
- (void)requestDiamondsPayWithAppID:(id)a0 orderID:(id)a1 diamonds:(long long)a2 payTag:(id)a3 callback:(id /* block */)a4;
- (void)requestRoomInfoWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestUserInfoWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestUserInfoV2WithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestOrderGenIDWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestOrderDetailWithAppID:(id)a0 orderID:(id)a1 callback:(id /* block */)a2;
- (void)requestStartGame:(id)a0 gameID:(int)a1 roomID:(id)a2 launchSource:(unsigned long long)a3 callback:(id /* block */)a4;
- (void)requestIndividualPlayerWithAppID:(id)a0 isIntermediate:(BOOL)a1 callback:(id /* block */)a2;
- (void)requestCreatePropUsageOrderWithAppID:(id)a0 propId:(long long)a1 propNum:(long long)a2 callback:(id /* block */)a3;
- (void)requestUserPropInfoWithAppID:(id)a0 propIds:(id)a1 callback:(id /* block */)a2;
- (void)requestBootConfigWithAppID:(id)a0 callback:(id /* block */)a1;
- (void)requestSecretKeyWithAppID:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
