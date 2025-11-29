@class NSString, AWEPublishBaseTask;

@interface AWEStudioSoloKTVPublishServiceImpl : NSObject <AWEPublishTaskMessage, AWEStudioSoloKTVPublishService>

@property (nonatomic) BOOL hasRegisteredPublishMessage;
@property (weak, nonatomic) AWEPublishBaseTask *currentPublishTask;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)addListener;
- (void)removeListener;
- (void)silentlyPublishWithFilePath:(id)a0 publishConfig:(id)a1 trackExtra:(id)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (BOOL)existPublishingTask;
- (void)cancelCurrentPublishTaskWithCallBack:(id /* block */)a0;
- (void)saveDraftWithFilePath:(id)a0 trackExtra:(id)a1 completion:(id /* block */)a2;
- (void)silentlyPublishWithFilePath:(id)a0 publishConfig:(id)a1 trackExtra:(id)a2;
- (id)setupPublishModelWithInputData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
