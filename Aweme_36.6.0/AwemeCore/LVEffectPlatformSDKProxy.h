@class NSString, EffectPlatform;

@interface LVEffectPlatformSDKProxy : NSObject <LVEffectDownloadProxyDelegate>

@property (retain, nonatomic) EffectPlatform *effectPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadEffectListWithResourceIds:(id)a0 panel:(id)a1 completion:(id /* block */)a2;
- (void)downloadEffectListWithEffectIDS:(id)a0 completion:(id /* block */)a1;
- (void)downloadEffect:(id)a0 completion:(id /* block */)a1;
- (id)lvEffectPlatform;
- (BOOL)validateEffectWithDataSource:(id)a0 filePath:(id)a1;
- (void)fetchEffectListWithEffectIDListRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchEffectListWithResourceIDListRequest:(id)a0 completion:(id /* block */)a1;
- (void)downloadEffectWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)downloadEffectWithDataSource:(id)a0 retryCount:(long long)a1 validator:(id)a2 completion:(id /* block */)a3;
- (id)effectPathForEffectDataSource:(id)a0;
- (void)downloadList:(id)a0 needCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)downloadEffect:(id)a0 tryMaxCount:(unsigned long long)a1 validator:(id)a2 completionWithTryCount:(id /* block */)a3 completion:(id /* block */)a4;
- (void)downloadList:(id)a0 needCache:(BOOL)a1 resourceIDs:(id)a2 completion:(id /* block */)a3;
- (void)downloadEffectItem:(id)a0 tryMaxCount:(unsigned long long)a1 validator:(id)a2 completionWithTryCount:(id /* block */)a3 completion:(id /* block */)a4;
- (void)downloadList:(id)a0 completion:(id /* block */)a1;
- (void)downloadEffectItem:(id)a0 completion:(id /* block */)a1;
- (void)checkEffectUpdate:(id)a0 completion:(id /* block */)a1;
- (id)cachedEffects:(id)a0;
- (id)initWithEffectPlatform:(id)a0;
- (id)p_unmatchedPlatformError:(long long)a0;
- (void).cxx_destruct;

@end
