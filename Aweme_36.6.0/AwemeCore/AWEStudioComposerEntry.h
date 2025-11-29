@interface AWEStudioComposerEntry : NSObject

+ (id)baseTaskClasses;
+ (id)saveDraftTaskClasses;
+ (id)silentPublishTaskClasses;
+ (id)modernTaskClasses;
+ (id)deprecated_taskClasses;
+ (Class)aAWEStudioComposerAdapterClass;
+ (id)createPublishModelWithApiModel:(id)a0 cameraCustomization:(id)a1 purpose:(long long)a2 silentPublishApi:(id)a3 context:(id)a4 beforeTaskInject:(id /* block */)a5 completion:(id /* block */)a6 exitAction:(id /* block */)a7;
+ (id)shared;

- (id)aAWEStudioComposerAdapter;
- (id)decorateComposerInput:(id)a0;

@end
