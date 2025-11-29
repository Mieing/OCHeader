@class NSRecursiveLock, NSString, MMAxAuthLogic, MMMultiHostAuthInfo;

@interface MMAxAuthWrap : NSObject <MMAxAuthLogicDelegate>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain) MMMultiHostAuthInfo *authInfo;
@property (retain) MMAxAuthLogic *axAuthLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAxAuthSecResp:(id)a0;
- (void)startRequestWithExpireTimestamp:(unsigned int)a0;
- (void)clearRequest;
- (id)identify;
- (unsigned long long)getAxAuthState;
- (id)authInfoForHost:(id)a0;
- (void)onAxAuthLogicSuccess:(id)a0 clientSessionKey:(id)a1 serverSessionKey:(id)a2 serverId:(id)a3 hostAlgoList:(id)a4;
- (void)onAxAuthLogicFailed:(id)a0;
- (void).cxx_destruct;

@end
