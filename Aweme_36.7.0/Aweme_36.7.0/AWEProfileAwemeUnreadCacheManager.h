@class NSString, NSMutableDictionary;

@interface AWEProfileAwemeUnreadCacheManager : NSObject <AWEUserMessage, AWEProfileAwemeUnreadCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *memoryCacheMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_clearCache;
- (BOOL)isItemUnreadWithUserID:(id)a0 item:(id)a1;
- (void)p_videoStartPlaySucceed:(id)a0;
- (id)getItemIDsWithUserID:(id)a0;
- (void)p_markReadStatusWithUser:(id)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (void)storeItemIDsWithUserID:(id)a0 items:(id)a1;
- (void)p_uploadUserVideosReadStatusWithType:(unsigned long long)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (id)diffCacheItemsNotExistStatusWithUser:(id)a0 diffTargetItems:(id)a1 responseItems:(id)a2;
- (void)updateCacheItemsNotExistStatusWithUser:(id)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (void)diffAndUpdateCacheItemsNotExistStatusWithUser:(id)a0 diffTargetItems:(id)a1 responseItems:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
