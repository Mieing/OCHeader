@class NSArray, NSString;

@interface AWEPluginPigeonCustomImpl : NSObject <BDPPigeonPluginDelegate>

@property (retain, nonatomic) NSArray *pigeonClasses;
@property (retain, nonatomic) NSArray *pigeonMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (Class)aAWETimorModuleDOUYINHTSAdaperClass;

- (void)bdp_callBusinessMethodWithParam:(id)a0 completion:(id /* block */)a1;
- (id)bdp_callBusinessMethodSyncWithParam:(id)a0 error:(id *)a1;
- (id)customPigeonClasses;
- (void)registerPigeonClasses;
- (id)aAWETimorModuleDOUYINHTSAdaper;
- (void)checkPigeonMethods;
- (void)pigeonWithParam:(id)a0 completion:(id /* block */)a1;
- (void)bdp_pigeonWithParam:(id)a0 completion:(id /* block */)a1;
- (id)bdp_pigeonSyncWithParam:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
