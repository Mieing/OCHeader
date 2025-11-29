@class NSString, _TtC6WeChat31MagicPermissionConfigPkgManager, NSMutableDictionary;

@interface MagicPermissionConfigService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) _TtC6WeChat31MagicPermissionConfigPkgManager *pkgMgr;
@property (retain, nonatomic) NSMutableDictionary *dicBizName2Config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getBizConfig:(id)a0;
- (id)getPermissionBlackList:(id)a0 moduleType:(id)a1;
- (id)getBizConfig:(id)a0 moduleType:(id)a1 configName:(id)a2;
- (void).cxx_destruct;

@end
