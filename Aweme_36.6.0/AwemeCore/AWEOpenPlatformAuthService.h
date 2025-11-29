@class NSString, NSMapTable;

@interface AWEOpenPlatformAuthService : HTSService <AWEOpenPlatformAuthService>

@property (retain, nonatomic) NSMapTable *imMsgVCMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allLocalScopes;
+ (void)authScope:(id)a0 forClientKey:(id)a1;
+ (void)removeScope:(id)a0 forClientKey:(id)a1;
+ (BOOL)checkScope:(id)a0 validPeriod:(long long)a1 forClientKey:(id)a2;

- (void)authorizeWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)showAuthIMMessageViewWithParams:(id)a0 completion:(id /* block */)a1;
- (void)closePrivateMessageViewWithParams:(id)a0 completion:(id /* block */)a1;
- (void)showRealNameInterconnectionViewWithParams:(id)a0 completion:(id /* block */)a1;
- (void)showVC:(id)a0 at:(id)a1 useHalf:(BOOL)a2 halfVCBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)getLaunchMethodFromFlowType:(unsigned long long)a0;
- (id)getMobWithParams:(id)a0;
- (id)getAttribution:(id)a0;
- (void).cxx_destruct;

@end
