@class NSString, NSMutableDictionary;

@interface WCImageCache : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *m_WCImagesOfType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)couldCacheImage:(id)a0;

- (id)init;
- (id)getImage:(id)a0 ofType:(long long)a1;
- (void)setImage:(id)a0 forMedia:(id)a1 ofType:(long long)a2;
- (void)clearAllCaches;
- (void)onServiceMemoryWarning;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void).cxx_destruct;

@end
