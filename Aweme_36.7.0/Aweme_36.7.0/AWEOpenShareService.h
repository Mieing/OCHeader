@class AWEOpenShareManager, BDOpenSDKPasteShareData, NSString;

@interface AWEOpenShareService : HTSService <AWEOpenShareService, BDPlatformSDKURLServiceProtocol>

@property (retain, nonatomic) AWEOpenShareManager *shareManager;
@property (retain, nonatomic) BDOpenSDKPasteShareData *shareData;
@property (nonatomic) double timeDiff;
@property (retain, nonatomic) NSString *sendTimeStamp;
@property (nonatomic) BOOL usingClipboard;
@property (retain) NSString *creationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)consumerGetReqFromURL:(id)a0;
+ (BOOL)handleConsumerGetReq:(id)a0 withUserInfo:(id)a1 completion:(id /* block */)a2;
+ (id)URLFromProviderGetResp:(id)a0;
+ (BOOL)ignoreLogin;
+ (void)registerShareServiceWithShareDelegate:(id)a0;
+ (id)getShareDelegate;
+ (BOOL)requireLoginBeforeStart;
+ (void)getInvokeGameInfoWithSecUid:(id)a0 roomId:(id)a1 gameId:(id)a2 completion:(id /* block */)a3;
+ (void)reportShareWithID:(id)a0 when:(long long)a1 params:(id)a2;
+ (void)addShareTrackInfo:(id)a0 toPublishModel:(id)a1;
+ (void)startShareWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)handleCommonAbilityWithUrlString:(id)a0;
+ (id)monitorTrackerBuildOpenPlatformParamsWithURL:(id)a0;
+ (BOOL)shouldUseNewPublishAbilityWithClientKey:(id)a0 params:(id)a1;
+ (id)handleSDKParams:(id)a0 isUL:(BOOL)a1;
+ (id)handleH5Params:(id)a0;
+ (id)handleSystemParams:(id)a0;
+ (id)serviceName;
+ (id)sharedInstance;

- (id)consumerGetReqFromURL:(id)a0;
- (BOOL)handleConsumerGetReq:(id)a0 withUserInfo:(id)a1 completion:(id /* block */)a2;
- (void)getPasteboardItemsWithCert:(id)a0 completion:(id /* block */)a1;
- (void)handleAwemeShareWithDict:(id)a0;
- (void)handleAwemeShareFromSystemExtension:(id)a0;
- (id)popCreationID;
- (id)extractedShareDataFromQueryParams:(id)a0;
- (id)secretPara;
- (id)styleIDWithURL:(id)a0;
- (id)generateCreationID;
- (void).cxx_destruct;
- (id)init;

@end
