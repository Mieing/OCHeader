@class NSString, AWEVideoPublishViewModel;

@interface ACCAIGCLoraAsyncManager : NSObject <ACCAIGCLoraAsyncManagerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (copy, nonatomic) id /* block */ loraAIProcessBlock;
@property (copy, nonatomic) id /* block */ taskUnifyInteractionBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ resultComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)createLoraWithRepoContainer:(id)a0 loraAIProcessBlock:(id /* block */)a1 taskUnifyInteractionBlock:(id /* block */)a2 completionBlock:(id /* block */)a3 resultComplete:(id /* block */)a4;
- (void)createModelAIProcess;
- (void)uploadImagesCompletionNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
