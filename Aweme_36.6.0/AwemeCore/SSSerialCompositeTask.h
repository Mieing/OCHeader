@class NSArray, NSString;

@interface SSSerialCompositeTask : NSObject <ACCConfigConsumer>

@property (nonatomic) BOOL done;
@property (nonatomic) BOOL didStart;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_executeWithKey:(id)a0 runningTasks:(id)a1 completion:(id /* block */)a2 finalResult:(id)a3;
- (void).cxx_destruct;
- (void)executeWithCompletion:(id /* block */)a0;

@end
