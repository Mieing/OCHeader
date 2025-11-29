@class NSCondition;

@interface QBDNSExecutor : NSObject {
    NSCondition *_condition;
}

+ (id)registerExecutorName:(id)a0;

- (id)init;
- (id)executeBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
