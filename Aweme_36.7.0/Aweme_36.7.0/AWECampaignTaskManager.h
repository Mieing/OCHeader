@class NSString;

@interface AWECampaignTaskManager : HTSService <AWECampaignTaskManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELuckyActivityWatchVideoTaskDOUYINLiteAdapterClass;

- (void)transferSchemaToDict:(id)a0;
- (void)transferSchemaToDict:(id)a0 checkCampaignHost:(BOOL)a1;
- (id)realCampaignTaskSchemaForRedirect:(id)a0;
- (BOOL)createTaskForTaskType:(id)a0 withToken:(id)a1 extra:(id)a2;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)aAWELuckyActivityWatchVideoTaskDOUYINLiteAdapter;
- (void)createNewWatchTaskForJSON:(id)a0 withExtraStr:(id)a1 schema:(id)a2;
- (id)init;
- (void)dealloc;

@end
