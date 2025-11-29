@class NSString;

@interface IESIMBaseDataControllerPluginImpl : NSObject <IESIMBaseDataControllerPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)createStreakRemindPushManager;
- (void)loadForceInsertData;
- (void)insertFtsInitIfNeed;
- (id)createSubscribeDataManager;
- (void)createBirthdayWishPushManager;
- (void)createSceneGreetingManager;
- (void)createOnlineRemindPushManager;
- (void)createNotifyOnlineFriendsManager;
- (void)createFestivalWishPushManager;
- (void)preloadMessageEmojiAnimatorResourceIfNeed;

@end
