@class NSDate;

@interface LSSOperation : NSOperation

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) long long state;
@property (nonatomic) double checkTimeInterval;
@property (nonatomic) double timeoutInSeconds;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL shouldBlockWhenTimeOut;

+ (id)operationWithBlock:(id /* block */)a0 timeoutInSeconds:(double)a1 shouldBlockWhenTimeOut:(BOOL)a2;
+ (id)operationWithBlockAndTimeoutBlock:(id /* block */)a0 timeoutBlock:(id /* block */)a1 timeoutInSeconds:(double)a2 shouldBlockWhenTimeOut:(BOOL)a3;

- (id)initWithBlock:(id /* block */)a0 timeoutBlock:(id /* block */)a1 timeoutInSeconds:(double)a2 shouldBlockWhenTimeOut:(BOOL)a3;
- (void).cxx_destruct;
- (void)finish;
- (void)main;

@end
