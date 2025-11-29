@class NSString;

@interface AFDMentionListCacheManager : NSObject <AWEUserMessage, NSCacheDelegate, AFDMentionListCacheManagerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_memoryCache;
    void /* unknown type, empty encoding */ selectedUserList;
}

@property (class, nonatomic, readonly) NSString *kDefaultSearchKeyword;
@property (class, nonatomic, readonly) AFDMentionListCacheManager *manager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)addCommentNotification:(id)a0;
- (id)mentionListCacheKeyWithKey:(id)a0 scene:(long long)a1;
- (void)selectUsers:(id)a0;
- (void)cacheWithModel:(id)a0 forKey:(id)a1 scene:(long long)a2;
- (id)mentionListCachedModelForKey:(id)a0 scene:(long long)a1;
- (void)removeDefaultUserCache;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
