@protocol AWEClientAILLMResourceDelegate, AWEClientAILLMResourceMonitorDelegate;

@interface AWEClientAILLMAbstractResource : NSObject

@property (weak, nonatomic) id<AWEClientAILLMResourceDelegate> delegate;
@property (weak, nonatomic) id<AWEClientAILLMResourceMonitorDelegate> monitorDelegate;
@property (nonatomic) float loraScale;

- (BOOL)isModelFileExists;
- (void)recordAccessResource;
- (void)downloadResourceIfNeededWithCompletion:(id /* block */)a0;
- (void)recordAccessLoraAdapter;
- (void).cxx_destruct;
- (id)modelPath;

@end
