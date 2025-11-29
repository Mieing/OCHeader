@class NSString;

@interface AWEIMStreakSingleChatResourcePrefetchComponent : AWEIMComponentBase <AWEIMSchemaResourcePrefetchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)preActiveGeckoPositionType;
- (id)preActiveGeckoPositionIDs;
- (id)prefetchComponentResourceSchema;
- (BOOL)canPrefetchPetElfComponentResource;
- (BOOL)canPreFetchPetElfInviteComponentResource;
- (BOOL)shouldShowPetElfInviteStatusWithCon:(id)a0;
- (id)conversation;

@end
