@class NSString;

@interface HTSShareActionLark : NSObject <LarkShareApiDelegate, HTSShareAction>

@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)a0;
- (void)onResp:(id)a0;
- (void)shareWithModel:(id)a0 toPlatform:(long long)a1 completion:(id /* block */)a2;
- (void)shareWithModel:(id)a0 completion:(id /* block */)a1;
- (void)sendURLMessage:(id)a0 completion:(id /* block */)a1;
- (void)sendWithShortenURLString:(id)a0 shortBelong:(id)a1 withCompletion:(id /* block */)a2;
- (void)sendLarkMediaObject:(id)a0 completion:(id /* block */)a1;
- (void)didSendRequestWithResult:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;

@end
