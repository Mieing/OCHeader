@interface AWEFeedCreationEffectCardController : AWEFeedCreationCardMigrationBaseController

@property (nonatomic) BOOL hasShowed;

+ (id)businessID;

- (void)preloadResourcesIfNeededWithAweme:(id)a0;
- (BOOL)basicConditionsInvalid;

@end
