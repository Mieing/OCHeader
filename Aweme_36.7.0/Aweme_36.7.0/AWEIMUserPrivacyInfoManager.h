@class NSArray, NSDictionary, NSString, NSCache;

@interface AWEIMUserPrivacyInfoManager : NSObject <AWEUserMessage, AWEIMUserPrivacyInfoManagerProtocol>

@property (readonly, nonatomic) BOOL cachedLibEnableCache;
@property (readonly, nonatomic) NSArray *cachedLibAliasBlacklist;
@property (copy, nonatomic) NSArray *aliasWhitelist;
@property (nonatomic) BOOL isShowingAlert;
@property (copy, nonatomic) NSDictionary *orderConfigMap;
@property (retain, nonatomic) NSCache *groupAliasCache;
@property (retain, nonatomic) NSCache *groupAliasPinYinSearchObjCache;
@property (nonatomic) BOOL protectedTurnedOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUserPrivacyInfoManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)displayNameWithUser:(id)a0 scene:(unsigned long long)a1;
- (id)displayNameWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2;
- (id)aliasWithUser:(id)a0 scene:(unsigned long long)a1;
- (id)groupAliasWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2;
- (void)__clearCache;
- (void)__cacheInit;
- (void)updateGroupAliasCacheWithGroupAlias:(id)a0 userID:(id)a1 conversationID:(id)a2;
- (void)__setup;
- (id)groupAliasPinYinSearchObjWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2;
- (id)displayNameWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2 ext:(id)a3;
- (void)removeGroupAliasCacheWithUserIDs:(id)a0 conversationID:(id)a1;
- (id)aliasPinYinSearchObjWithUser:(id)a0 scene:(unsigned long long)a1;
- (void)__handleDidEnterBackgroundNotification;
- (id)p_groupAliasWithUser:(id)a0 memberModel:(id)a1 conversationID:(id)a2 scene:(unsigned long long)a3;
- (id)__groupAliasWithUser:(id)a0 conversationID:(id)a1 curLoginUid:(id)a2;
- (BOOL)couldAccessAliasWithUser:(id)a0 scene:(unsigned long long)a1;
- (id)__displayNameForConversationID:(id)a0 ext:(id)a1 commonScene:(id)a2 tracker:(id)a3 user:(id)a4;
- (id)__setupOrderConfigMap;
- (id)__displayOrderWithCommonScene:(id)a0;
- (void)showAlertWithAliasScene:(unsigned long long)a0;
- (id)displayStringForConversationID:(id)a0 ext:(id)a1 aliasType:(unsigned long long)a2 scene:(unsigned long long)a3 tracker:(id)a4 user:(id)a5;
- (BOOL)couldAccessGroupAliasWithUser:(id)a0 scene:(unsigned long long)a1;
- (id)__groupAliasWithUser:(id)a0 memberModel:(id)a1 conversationID:(id)a2 curLoginUid:(id)a3;
- (id)p_groupAliasCacheKeyWithSourceUid:(id)a0 targetUid:(id)a1 conversationID:(id)a2;
- (BOOL)__enableCache;
- (id)aliasBlacklist;
- (void)modifyIsExistInWhiteList:(BOOL *)a0;
- (void)checkRepeatScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
