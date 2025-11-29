@class NSString, NSCache;

@interface ACCElementBindCache : HTSService <ACCElementBindCache> {
    NSCache *m_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarningNotification:(id)a0;
- (id)objectForParams:(id)a0;
- (void)setObject:(id)a0 forParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
