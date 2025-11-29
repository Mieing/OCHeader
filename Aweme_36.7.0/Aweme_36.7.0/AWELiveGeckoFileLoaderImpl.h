@class NSString;

@interface AWELiveGeckoFileLoaderImpl : NSObject <IESLiveGeckoFileLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerPrefetchChannels:(id)a0;
- (id)prefetchDataForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)stringWithPath:(id)a0 forChannel:(id)a1;

@end
