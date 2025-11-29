@class NSString;

@interface AWEGameCPModuleService : HTSService <AWEGameCPModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)storeKitAwemeInterface;
- (id)gameCPCommentTabInterfaceWithAwemeModel:(id)a0;
- (id)gameCPCommentTemplateTabInterfaceWithAwemeModel:(id)a0;
- (id)richContentInterface;
- (id)videoAnchorInterfaceWithAwemeModel:(id)a0;
- (id)videoContainerInterface;
- (id)gameCPKitService;
- (id)evaluationCardManagerInterfaceWithAwemeModel:(id)a0;
- (id)audienceDetailInstanceInterfaceWithAwemeModel:(id)a0;
- (id)settingInterface;
- (id)trackContextInterface;
- (id)evaluationPublishInterface;

@end
