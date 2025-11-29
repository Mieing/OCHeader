@class NSString;

@interface AWEIMChatBgImageCacheManager : NSObject <AWEIMChatBgImageCacheInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)preloadIfNeededBgImageURLsWithImageURI:(id)a0 skey:(id)a1 complete:(id /* block */)a2;
- (void)cachedChatBgImgURLFromURI:(id)a0 skey:(id)a1 completion:(id /* block */)a2;
- (void)fetchImageURLListWithURI:(id)a0 complete:(id /* block */)a1;

@end
