@class AWEPublishBaseTask, NSString, NSHashTable;

@interface ACCDRPublishServiceImpl : NSObject <AWEPublishTaskMessage, ACCDRPublishService>

@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (nonatomic) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didCreateAweme:(BOOL)a1 error:(id)a2;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 needResetWithInfo:(id)a1;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)replaceMusicPublishProgressWithTask:(id)a0 taskStatus:(long long)a1;
- (void)task:(id)a0 didRemoveWithResult:(long long)a1 error:(id)a2 info:(id)a3;
- (void)task:(id)a0 didPendingAtStage:(id)a1 error:(id)a2;
- (void)task:(id)a0 didResumeAtStage:(id)a1;
- (void)requestDynamicActivityInfoIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)retryPublish;
- (unsigned long long)currentPublishState;
- (void)publishEndPageWillClose:(id)a0;
- (void)publishEndWithResult:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;

@end
