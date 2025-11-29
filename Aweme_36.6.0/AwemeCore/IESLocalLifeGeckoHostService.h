@class NSString;

@interface IESLocalLifeGeckoHostService : HTSService <IESLocalLifeGeckoHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)env;
+ (id)gurdVersion;
+ (id)rootDirectoryForAccessKey:(id)a0;
+ (id)rootDirectoryForAccessKey:(id)a0 channel:(id)a1;
+ (BOOL)hasCacheForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
+ (id)dataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
+ (void)asyncGetDataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
+ (long long)cacheStatusForAccessKey:(id)a0 channel:(id)a1;
+ (BOOL)enqueueSyncResourcesTask:(id)a0;
+ (id)internalRootDirectoryForAccessKey:(id)a0 channel:(id)a1;
+ (void)clearCacheForAccessKey:(id)a0 channel:(id)a1;
+ (void)registerEventDelegate:(id)a0;
+ (id)accessKey;
+ (id)convertTask:(id)a0;


@end
