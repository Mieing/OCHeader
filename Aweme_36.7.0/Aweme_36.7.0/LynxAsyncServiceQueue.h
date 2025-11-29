@class LynxThreadSafeDictionary;

@interface LynxAsyncServiceQueue : NSOperationQueue

@property (retain, nonatomic) LynxThreadSafeDictionary *operationDic;

- (void)addOperation:(id)a0 withIdentify:(id)a1;
- (id)operationWithIdentify:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
