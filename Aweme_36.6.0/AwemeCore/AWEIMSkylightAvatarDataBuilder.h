@class NSString;

@interface AWEIMSkylightAvatarDataBuilder : NSObject <AWEIMSkylightDataBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rebuildViewModelsWithExcludedList:(id)a0 pageIdentifier:(id)a1;
+ (id)p_backupFriendsWithFriends:(id)a0 degradeType:(unsigned long long)a1;
+ (id)constructUserViewModelWithData:(id)a0 pageIdentifier:(id)a1;
+ (void)p_addFriendAndFollowedUsersIfNeededWithList:(id)a0 excludeUidsSet:(id)a1 pageIdentifier:(id)a2;
+ (void)trackSkylightDegradeWithResponse:(id)a0 dbFriendCount:(unsigned long long)a1;
+ (void)class_filterExcludeUidsSet:(id)a0 fromDict:(id)a1;

- (void)filterExcludeUidsSet:(id)a0 fromDict:(id)a1;
- (id)buildViewModelsWithContext:(id)a0;

@end
