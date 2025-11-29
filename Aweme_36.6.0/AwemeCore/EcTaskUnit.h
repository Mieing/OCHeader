@interface EcTaskUnit : NSObject

@property (copy, nonatomic) id /* block */ taskFinish;
@property (nonatomic) long long state;

- (id)uniqueTaskKey;
- (void).cxx_destruct;
- (BOOL)canRun;
- (void)finish;
- (void)run;
- (void)cancel;

@end
