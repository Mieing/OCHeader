@class NSMutableArray;

@interface CJPayRenderCompletionManager : NSObject

@property (retain, nonatomic) NSMutableArray *completionBlocks;

- (void)addRenderCompletionBlock:(id /* block */)a0;
- (void)notifyRenderCompletion;
- (void).cxx_destruct;
- (id)init;

@end
