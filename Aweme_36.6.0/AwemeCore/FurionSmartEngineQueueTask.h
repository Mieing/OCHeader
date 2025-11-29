@interface FurionSmartEngineQueueTask : NSObject

@property (nonatomic) BOOL onMainQueue;
@property (copy, nonatomic) id /* block */ taskBlock;

- (void).cxx_destruct;
- (void)run;

@end
