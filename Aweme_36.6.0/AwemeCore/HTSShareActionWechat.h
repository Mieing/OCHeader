@class NSString;
@protocol WXApiDelegate;

@interface HTSShareActionWechat : NSObject <WXApiDelegate, HTSShareAction>

@property (copy, nonatomic) id /* block */ shareCompletion;
@property (weak, nonatomic) id<WXApiDelegate> originalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)a0;
- (BOOL)isPlatformInstalled:(long long)a0;
- (BOOL)openAppWithPlatform:(long long)a0;
- (void)onResp:(id)a0;
- (void)onReq:(id)a0;
- (void)shareWithModel:(id)a0 toPlatform:(long long)a1 completion:(id /* block */)a2;
- (BOOL)openWechatUsingSchema;
- (void)_sendVideoWithURLString:(id)a0 thumbImage:(id)a1 title:(id)a2 description:(id)a3 wxScene:(int)a4 completion:(id /* block */)a5;
- (void)_sendWebPageWithThumbImage:(id)a0 title:(id)a1 description:(id)a2 URLString:(id)a3 wxScene:(int)a4 completion:(id /* block */)a5;
- (void)_sendImage:(id)a0 wxScene:(int)a1 completion:(id /* block */)a2;
- (void)_sendTextWithContent:(id)a0 wxScene:(int)a1 completion:(id /* block */)a2;
- (void)shareWithRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
