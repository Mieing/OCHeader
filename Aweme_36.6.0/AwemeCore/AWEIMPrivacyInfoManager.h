@class NSString;

@interface AWEIMPrivacyInfoManager : NSObject <AWEIMPrivacyInfoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIMPrivacyInfoManager;

- (id)displayNameWithUser:(id)a0 scene:(unsigned long long)a1;
- (id)displayNameWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2;
- (id)aliasWithUser:(id)a0 scene:(unsigned long long)a1;
- (id)groupAliasWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2;
- (void)updateGroupAliasCacheWithGroupAlias:(id)a0 userID:(id)a1 conversationID:(id)a2;
- (BOOL)protectedTurnedOn;
- (id)groupAliasPinYinSearchObjWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2;
- (id)displayNameWithUser:(id)a0 conversationID:(id)a1 scene:(unsigned long long)a2 ext:(id)a3;
- (void)removeGroupAliasCacheWithUserIDs:(id)a0 conversationID:(id)a1;
- (id)aliasPinYinSearchObjWithUser:(id)a0 scene:(unsigned long long)a1;

@end
