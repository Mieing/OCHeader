@class NSString, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformSilentAuthProvider : NSObject <AWEOpenPlatformBridgeAuthViewController, AWEOpenPlatformAuthFlowManagerDelegate>

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) id /* block */ bridgeAuthCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorizeComplated:(id)a0 error:(id)a1;
- (void)fetchAuthUserInfoCompleted:(id)a0;
- (id)initWithJSBridgeParams:(id)a0;
- (void)updateOauthData:(id)a0;
- (void).cxx_destruct;
- (void)start;

@end
