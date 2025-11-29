@class NSString;

@interface AWEPCTPicTemplateTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)executePicTemplateApplyTaskWith:(id)a0 task:(id)a1 finishHandler:(id /* block */)a2;
+ (void)checkTemplateIsReadyWith:(id)a0 completion:(id /* block */)a1;


@end
