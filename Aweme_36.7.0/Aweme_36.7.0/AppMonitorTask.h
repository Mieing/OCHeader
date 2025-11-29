@class NSString;

@interface AppMonitorTask : NSObject <AppMonitorTask>

@property (nonatomic) long long execCount;
@property (nonatomic) double lastExecTime;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long priority;
@property (nonatomic) double interval;
@property (nonatomic) long long repeatedCount;
@property (copy, nonatomic) id /* block */ execBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterval:(double)a0 execBlock:(id /* block */)a1 repeatedCount:(long long)a2;
- (void).cxx_destruct;

@end
