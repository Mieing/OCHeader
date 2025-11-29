@class NSString;
@protocol WeiboSDKDelegate;

@interface HTSShareActionWeibo : NSObject <WeiboSDKDelegate, HTSShareAction>

@property (copy, nonatomic) id /* block */ shareCompletion;
@property (weak, nonatomic) id<WeiboSDKDelegate> originalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlatformAvailable:(long long)a0;
- (BOOL)isPlatformInstalled:(long long)a0;
- (BOOL)openAppWithPlatform:(long long)a0;
- (void)openAppWithPlatform:(long long)a0 completion:(id /* block */)a1;
- (void)didReceiveWeiboRequest:(id)a0;
- (void)didReceiveWeiboResponse:(id)a0;
- (void)shareWithModel:(id)a0 completion:(id /* block */)a1;
- (void)_sendMessageWithText:(id)a0 completion:(id /* block */)a1;
- (void)shareWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)_sendImageMessageWithText:(id)a0 image:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;

@end
