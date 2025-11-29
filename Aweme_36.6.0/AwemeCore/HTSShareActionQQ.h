@class NSString;

@interface HTSShareActionQQ : NSObject <QQApiInterfaceDelegate, HTSShareAction>

@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)a0;
- (BOOL)isPlatformInstalled:(long long)a0;
- (BOOL)openAppWithPlatform:(long long)a0;
- (id)URLWithURLString:(id)a0;
- (void)onResp:(id)a0;
- (void)onReq:(id)a0;
- (void)shareWithModel:(id)a0 toPlatform:(long long)a1 completion:(id /* block */)a2;
- (BOOL)openQQUsingSchema;
- (void)_sendImageMessage:(id)a0 title:(id)a1 description:(id)a2 sceneType:(long long)a3 completion:(id /* block */)a4;
- (void)_sendNewsURLMessageToQQImage:(id)a0 shareURL:(id)a1 title:(id)a2 desc:(id)a3 completion:(id /* block */)a4;
- (void)_sendTextMessage:(id)a0 completion:(id /* block */)a1;
- (void)_sendTextMessageToQZoneContent:(id)a0 completion:(id /* block */)a1;
- (void)_sendNewsURLMessageToQZoneImage:(id)a0 shareURL:(id)a1 title:(id)a2 desc:(id)a3 completion:(id /* block */)a4;
- (void)didSendRequestWithResultCode:(long long)a0 completion:(id /* block */)a1;
- (void)_sendImageMessageWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 sceneType:(long long)a4 completion:(id /* block */)a5;
- (void)isOnlineResponse:(id)a0;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;

@end
