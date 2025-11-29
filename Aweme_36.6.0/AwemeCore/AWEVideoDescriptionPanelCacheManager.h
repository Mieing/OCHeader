@class NSArray, NSMutableDictionary, NSString;

@interface AWEVideoDescriptionPanelCacheManager : NSObject <AWEUserMessage, AWEGuestModeMessage, AWEVideoDescriptionPanelCacheManagerService>

@property (nonatomic) long long cacheNum;
@property (retain, nonatomic) NSMutableDictionary *caches;
@property (copy, nonatomic) NSArray *allModels;
@property (retain, nonatomic) NSMutableDictionary *mentionModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedManager;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)getRelatedRecommendModelsWithItemID:(id)a0 referString:(id)a1;
- (id)mentionModelWithItemID:(id)a0;
- (void)cacheRelatedRecommendModels:(id)a0 itemID:(id)a1 referString:(id)a2;
- (void)cacheRelatedRecommendMentionModel:(id)a0 itemID:(id)a1;
- (void)addNotification;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onAwemeFavoriteNotification:(id)a0;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)guestDidDiggAweme:(id)a0 isUndigg:(BOOL)a1;
- (id)getCacheModelWithItemID:(id)a0 cacheModelList:(id)a1;
- (void)deleteMentionModelIfNeeded;
- (id)getCurrentAllModels;
- (void)onAwemeDislikeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
