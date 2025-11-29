@interface WCFinderTaskPQTask : NSObject

@property (copy, nonatomic) id /* block */ taskBlock;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double time;
@property (nonatomic) BOOL asyncEnd;

- (void).cxx_destruct;

@end
