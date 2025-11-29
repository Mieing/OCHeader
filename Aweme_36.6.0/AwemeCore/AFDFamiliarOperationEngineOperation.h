@class AWEPageContext;

@interface AFDFamiliarOperationEngineOperation : NSOperation

@property (retain, nonatomic) AWEPageContext *context;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (copy, nonatomic) id /* block */ operationCompletionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (BOOL)handleCancelled;
- (void).cxx_destruct;
- (void)main;

@end
