@class NSString;

@interface AWEUITaskSpreadExecutor : NSObject

@property (class, nonatomic) BOOL suspended;
@property (class, nonatomic) double runningLimit;

@property (nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *groupID;

+ (id)sharedInstance;
+ (void)endImmediately;

- (id)invokeBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)flushTask:(id)a0;
- (BOOL)isExistWithTaskID:(id)a0;
- (id)invokeBlock:(id /* block */)a0 finishBlock:(id /* block */)a1;
- (void)flushAll;
- (BOOL)didFinished;
- (id)invokeBlock:(id /* block */)a0 afterDelay:(double)a1 finishBlock:(id /* block */)a2;
- (id)invokeBlock:(id /* block */)a0 afterDelay:(double)a1 finishBlock:(id /* block */)a2 untilTime:(double)a3;
- (BOOL)cancelTask:(id)a0;
- (void).cxx_destruct;
- (id)invokeBlock:(id /* block */)a0;
- (BOOL)cancelAll;
- (id)initWithGroupID:(id)a0;

@end
