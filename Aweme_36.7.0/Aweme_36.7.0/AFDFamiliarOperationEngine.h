@class NSOperationQueue;

@interface AFDFamiliarOperationEngine : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)addOperationWithContext:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)init;

@end
