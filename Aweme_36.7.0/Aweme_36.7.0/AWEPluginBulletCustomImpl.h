@class NSString;

@interface AWEPluginBulletCustomImpl : NSObject <BDPBulletPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)openBulletPageWithSchema:(id)a0 globalProps:(id)a1 initialData:(id)a2 extra:(id)a3 configModel:(id)a4 completion:(id /* block */)a5;
- (void)openBulletPageWithSchema:(id)a0 globalProps:(id)a1 initialData:(id)a2 extra:(id)a3;
- (void)unsubscribeEvents:(id)a0;

@end
