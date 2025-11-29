@class NSString;
@protocol IESLiveHTTPClient, IESLiveMonitor, IESLiveUserService;

@interface IESLiveNativeAppApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) NSString *baseURL;
@property (copy, nonatomic) NSString *stampBaseURL;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveHTTPClient> httpClient;

+ (BOOL)usePreloadShelfInfo;
+ (id)adTrackParamsWithTrackContext:(id)a0;
+ (id)adChannelWithTrackContext:(id)a0;
+ (id)getShelfInfoParamsWithRoomId:(id)a0 trackContext:(id)a1 extraDict:(id)a2;

- (void)setMemoryData:(id)a0;
- (id)openAPIBaseURL;
- (void)uploadCoverImage:(id)a0 completion:(id /* block */)a1;
- (id)uploadImage:(id)a0 URLString:(id)a1 progress:(id *)a2 parameters:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestExtraShelfConfig:(id)a0 extraScenes:(id)a1 completion:(id /* block */)a2;
- (void)requestMicroAppShelfInfoWithRoomId:(id)a0 trackContext:(id)a1 extraDict:(id)a2 completion:(id /* block */)a3;
- (void)recordNativeAppVisited:(id)a0 cardID:(unsigned long long)a1 roomID:(id)a2 type:(unsigned long long)a3;
- (void)fetchAudienceIMChatInfoWithToken:(id)a0 appID:(id)a1 roomID:(id)a2 completion:(id /* block */)a3;
- (void)configAPI;
- (void)getRoomInfoWithAppID:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)getUserInfo:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (id)bridgeURL;
- (void)buildRequestWithPath:(id)a0 params:(id)a1 baseURL:(id)a2 requestMethod:(unsigned long long)a3 respClass:(Class)a4 extraConfig:(id)a5 respCallback:(id /* block */)a6;
- (id)squareURL;
- (void)getMemoryAbilityStatusWithCompletion:(id /* block */)a0;
- (void)updateMemoryStatus:(long long)a0 cardStatus:(long long)a1 tradeDataStatus:(long long)a2 importantCardStatus:(long long)a3 completion:(id /* block */)a4;
- (void)trackNativeAppApiWithUrl:(id)a0 params:(id)a1 error:(id)a2 duration:(double)a3;
- (void)requestPreSetCardConfigWithAppID:(id)a0 schema:(id)a1 sourcePage:(id)a2 timeout:(id)a3 completion:(id /* block */)a4;
- (void)requestPreAppStartWithAppId:(id)a0 callback:(id /* block */)a1;
- (void)requestPreModifyCheck:(id)a0 completion:(id /* block */)a1;
- (void)checkSensitiveWord:(id)a0 type:(long long)a1 callBack:(id /* block */)a2;
- (void)checkSellingPoint:(id)a0 cardID:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPosterCoverColor:(id)a0 completion:(id /* block */)a1;
- (void)requestNativeAppMountIntroInfoWithCompletion:(id /* block */)a0;
- (void)updateIntroPanelInfoWithCompletion:(id /* block */)a0;
- (void)getMemoryData:(id /* block */)a0;
- (void)requestBootConfigWithAppID:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)requestPreSetCardConfigWithAppID:(id)a0 schema:(id)a1 sourcePage:(id)a2 completion:(id /* block */)a3;
- (void)updateCardStatusWithRoomID:(id)a0 cardID:(long long)a1 status:(BOOL)a2 completion:(id /* block */)a3;
- (void)modifyShelfWithRoomID:(id)a0 launchSource:(unsigned long long)a1 isBeforeLive:(BOOL)a2 startID:(unsigned long long)a3 shelfInfo:(id)a4 completion:(id /* block */)a5;
- (void)removeShelfWithRoomID:(id)a0 startID:(unsigned long long)a1 shelfInfo:(id)a2 completion:(id /* block */)a3;
- (void)queryCouponInfoWithEntranceWay:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getIMChatAbilityWithAppID:(id)a0 completion:(id /* block */)a1;
- (void)updateIMChatAbilityStatus:(BOOL)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
