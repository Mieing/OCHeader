@class NSString;

@interface AWEIMStreakGroupChatResourcePrefetchComponent : AWEIMComponentBase <AWEIMSchemaResourcePrefetchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)preActiveGeckoPositionType;
- (id)preActiveGeckoPositionIDs;
- (id)prefetchComponentResourceSchema;

@end
