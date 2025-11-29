@class NSString;

@interface ACCEditBeautyEffectDownloadAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *taskName;

- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;

@end
