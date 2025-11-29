@class NSString;

@interface AWEStudioFeedCardServiceImpl : NSObject <AWEStudioFeedCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardControllerClassesNeedRegisterWithFeedType:(long long)a0;
- (BOOL)enableCardMigrationWithFeedType:(long long)a0;
- (id)migrationConfigForFeedType:(long long)a0;

@end
