@class NSString;

@interface AWEPCGeneralPostTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)executeWithContext:(id)a0 task:(id)a1 finishHandler:(id /* block */)a2;
+ (void)applyTemplateWithContext:(id)a0 templateModel:(id)a1 finishHandler:(id /* block */)a2;
+ (void)downloadTemplateAndApplyWithContext:(id)a0 templateModel:(id)a1 finishHandler:(id /* block */)a2;
+ (void)fetchAndApplyWithContext:(id)a0 finishHandler:(id /* block */)a1;
+ (void)musicShareStory:(id)a0;


@end
