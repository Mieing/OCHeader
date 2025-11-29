@class NSString;

@interface AWEIMActiveUserManager : HTSService <AWEIMActiveUserService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeUserIndicativeView:(BOOL)a0;
+ (void)cancelMonitorActiveWithPageIdentifier:(id)a0 uniqueFlag:(id)a1;
+ (BOOL)isEnableForSourceType:(unsigned long long)a0;
+ (void)monitorActiveWithSecUid:(id)a0 uid:(id)a1 type:(unsigned long long)a2 pageIdentifier:(id)a3 uniqueFlag:(id)a4 completion:(id /* block */)a5;
+ (void)monitorActiveWithSecUid:(id)a0 uid:(id)a1 type:(unsigned long long)a2 pageIdentifier:(id)a3 uniqueFlag:(id)a4 enableNonFriendActiveInfo:(BOOL)a5 completion:(id /* block */)a6;
+ (void)monitorActiveWithConvId:(id)a0 type:(unsigned long long)a1 pageIdentifier:(id)a2 uniqueFlag:(id)a3 completion:(id /* block */)a4;
+ (void)fetchActiveStateWithConvID:(id)a0 timeInterval:(id)a1 callback:(id /* block */)a2;
+ (id)getActiveStateWithConvID:(id)a0;
+ (void)refreshActiveStateWithConvID:(id)a0 completion:(id /* block */)a1;
+ (void)pauseAllMonitorActiveWithPageIdentifier:(id)a0;
+ (void)resumeAllMonitorActiveWithPageIdentifier:(id)a0;
+ (void)forceFetchActiveWithPageIdentifier:(id)a0;
+ (void)cancelAllMonitorActiveWithPageIdentifier:(id)a0;
+ (void)setDidEnterBackgroundBlock:(id /* block */)a0 withType:(unsigned long long)a1 pageIdentifier:(id)a2;
+ (id)getActiveUserInfoWithSecUid:(id)a0 updateTime:(double)a1 lastActiveTime:(long long)a2;
+ (void)cacheDataWithInfos:(id)a0 groupConversationID:(id)a1;
+ (void)syncDataToAcquirersWithInfos:(id)a0;
+ (id)cachedActiveUserInfoWithKey:(id)a0;
+ (void)deleteActiveUserInfoWithKey:(id)a0;
+ (void)deleteActiveUserInfoWithKey:(id)a0 pageIdentifier:(id)a1;
+ (void)acquireActiveWithSecUidList:(id)a0 convIdList:(id)a1 source:(id)a2 completion:(id /* block */)a3;
+ (void)acquireActiveWithSecUidList:(id)a0 convIdList:(id)a1 source:(id)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)acquireActiveWithSecUidList:(id)a0 convIdList:(id)a1 source:(id)a2 onCompletion:(id /* block */)a3;
+ (void)acquireActiveWithSecUidList:(id)a0 convIdList:(id)a1 source:(id)a2 context:(id)a3 onCompletion:(id /* block */)a4;
+ (void)asyncCanFetchActiveWithGroupSessionID:(id)a0 completion:(id /* block */)a1;
+ (id)activeUserIndicativeView:(BOOL)a0 innerW:(double)a1 outerW:(double)a2;
+ (BOOL)isOnlineWithTimestamp:(double)a0;
+ (id)activeUserInfoWithType:(long long)a0 key:(id)a1;
+ (id)activeUserAcquirerWithType:(unsigned long long)a0 pageIdentifier:(id)a1;
+ (void)p_setActiveUserAcquirerWtihType:(long long)a0 key:(id)a1 uid:(id)a2 type:(unsigned long long)a3 pageIdentifier:(id)a4 uniqueFlag:(id)a5 completion:(id /* block */)a6;
+ (BOOL)p_isCurrentGroupIsBanned:(id)a0;
+ (BOOL)canFetchActiveWithGroupCon:(id)a0;
+ (BOOL)canFetchActiveWithGroupSessionID:(id)a0;
+ (BOOL)canPullFriendActiveStatus;
+ (void)setWillEnterForegroundBlock:(id /* block */)a0 withType:(unsigned long long)a1 pageIdentifier:(id)a2;


@end
