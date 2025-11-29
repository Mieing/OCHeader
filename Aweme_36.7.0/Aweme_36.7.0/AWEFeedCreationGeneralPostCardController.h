@interface AWEFeedCreationGeneralPostCardController : AWEFeedCreationCardMigrationBaseController

+ (BOOL)enableWithFeedType:(long long)a0;

- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (void)preloadResourcesIfNeededWithAweme:(id)a0;
- (id)jumpSchemaFromAweme:(id)a0;
- (id)generalPostInfo:(id)a0;

@end
