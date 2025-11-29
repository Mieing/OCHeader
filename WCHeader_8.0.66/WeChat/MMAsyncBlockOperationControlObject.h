@interface MMAsyncBlockOperationControlObject : NSObject

@property (nonatomic) BOOL hasMarkFinished;
@property (copy, nonatomic) id /* block */ endBlock;

- (void)dealloc;
- (void)markFinished;
- (void)configWithEndBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
