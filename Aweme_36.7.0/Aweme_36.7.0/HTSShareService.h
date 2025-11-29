@class NSDictionary, NSMutableDictionary, NSString;

@interface HTSShareService : HTSService <HTSService>

@property (retain, nonatomic) NSDictionary *shareActions;
@property (readonly, nonatomic) NSMutableDictionary *mutableShareActions;
@property (copy, nonatomic) NSDictionary *currentExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isPlatformAvailable:(long long)a0;
- (BOOL)isPlatformInstalled:(long long)a0;
- (BOOL)openAppWithPlatform:(long long)a0;
- (void)openAppWithPlatform:(long long)a0 completion:(id /* block */)a1;
- (void)shareWithModel:(id)a0 toPlatform:(long long)a1 completion:(id /* block */)a2;
- (void)openAppWithPlatform:(long long)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)registerAction:(id)a0 forPlatform:(long long)a1;
- (void)registerAction:(id)a0 forPlatforms:(id)a1;
- (id)actionForPlatform:(long long)a0;
- (BOOL)shouldFlowShareAuthEntry;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;

@end
