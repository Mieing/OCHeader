@class NSString;

@interface AWEStudioLiteModuleService : HTSService <AWEStudioLiteModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioLiteModuleServiceClass;

- (id)createLiteRepoWithTaskID:(id)a0 taskKey:(id)a1 taskName:(id)a2 challengeTaskKey:(id)a3 isRedpackCreateVideoTask:(BOOL)a4;
- (id)aAWEStudioLiteModuleService;

@end
