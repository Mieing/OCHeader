@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWEUserRecommendPreloadManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *preloadTasks;
@property (retain, nonatomic) NSMutableSet *userIDsToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)willDislikeUserWithContext:(id)a0;
- (void)p_reset;
- (void)p_onPersonalRecommendChanged:(id)a0;
- (void)preloadDataIfNeededForType:(long long)a0 userID:(id)a1 enterFrom:(id)a2;
- (id)p_createTaskForType:(long long)a0;
- (BOOL)p_removeTask:(id)a0;
- (void)p_trackPreloadForType:(long long)a0 enterFrom:(id)a1 eventType:(id)a2;
- (void)p_registerObservers;
- (void)p_unregisterObservers;
- (id)getPreloadDataControllerForType:(long long)a0 enterFrom:(id)a1 preloadCompletion:(id /* block */)a2;
- (id)currentPreloadTasks;
- (void).cxx_destruct;

@end
