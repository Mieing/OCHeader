@interface AWEAdBlockTask : AWEAdBasicTask

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)isAsyncTask;
- (id)init;

@end
