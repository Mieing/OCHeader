@class NSString;

@interface BDLynxGeckoAdapter : NSObject <BDLGeckoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootDirectoryForAccessKey:(id)a0;
- (id)rootDirectoryForAccessKey:(id)a0 channel:(id)a1;
- (long long)fileTypeForAccessKey:(id)a0 channel:(id)a1;
- (void)syncResourcesIfNeeded;
- (unsigned long long)normalPolicyDelaySyncTime;
- (void)registerChannels:(id)a0 forAccessKey:(id)a1;
- (void)syncResourcesChannels:(id)a0 completion:(id /* block */)a1;
- (void)syncResourcesForAccessKey:(id)a0 channels:(id)a1 completion:(id /* block */)a2;
- (id)rootDirectoryForChannel:(id)a0;
- (void)syncResourcesWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 businessDomain:(id)a3 forceSync:(BOOL)a4 completion:(id /* block */)a5;
- (void)syncResourcesWithAccessKey:(id)a0 channels:(id)a1 businessDomain:(id)a2 forceSync:(BOOL)a3 customParams:(id)a4 completion:(id /* block */)a5;
- (void)registerChannels:(id)a0;
- (id)accessKey;

@end
