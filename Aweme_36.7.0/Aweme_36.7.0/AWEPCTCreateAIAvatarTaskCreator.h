@class NSString;

@interface AWEPCTCreateAIAvatarTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)executeWithContext:(id)a0 task:(id)a1 finishHandler:(id /* block */)a2;
+ (void)openAIAvatarCreatePageWithContext:(id)a0 profileModel:(id)a1 finishHandler:(id /* block */)a2;
+ (void)jumpToManagerLoraPage;


@end
