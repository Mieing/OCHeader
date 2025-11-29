@class EcsConfig, NSString;

@interface EcsConfigService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) EcsConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)updateConfig:(id)a0;
- (id)getConfigAppidWhitelist;
- (BOOL)isWhitelistWeAppJumpInfo:(id)a0;
- (void).cxx_destruct;

@end
