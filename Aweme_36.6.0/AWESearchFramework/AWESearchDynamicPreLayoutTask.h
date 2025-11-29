@class NSArray, NSMutableArray;

@interface AWESearchDynamicPreLayoutTask : NSObject

@property (nonatomic) double maxAccumulatedHeight;
@property (nonatomic) long long loopDispatchSize;
@property (nonatomic) long long currentDispatchIndex;
@property (nonatomic) double currentAccumulateHeight;
@property (nonatomic) BOOL enableMultiTASM;
@property (nonatomic) BOOL enableAsyncResource;
@property (retain, nonatomic) NSArray *resultArray;
@property (retain, nonatomic) NSMutableArray *dynamicPatchArray;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) long long layoutStrategy;
@property (retain, nonatomic) Class preprocessClass;
@property (nonatomic) BOOL isCanceled;

+ (id)createTaskWithArray:(id)a0 finsihBlock:(id /* block */)a1 layoutStrategy:(long long)a2 preprocessClass:(Class)a3;
+ (id)createTaskWithArrayWithBlock:(id)a0 finsihBlock:(id /* block */)a1 layoutStrategy:(long long)a2 preprocessClass:(Class)a3;

- (id)initWithArray:(id)a0 finishBlock:(id /* block */)a1 layoutStrategy:(long long)a2 preprocessClass:(Class)a3;
- (void)createTask:(id /* block */)a0;
- (id)initWithArrayWithBlock:(id)a0 finishBlock:(id /* block */)a1 layoutStrategy:(long long)a2 preprocessClass:(Class)a3;
- (BOOL)checkIsAllFininsed;
- (void)dispatchLayoutTaskWithPatchSize:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)dispatchWithinOneFrame:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)dispatchLayoutTaskFromIndex:(long long)a0 toIndex:(long long)a1 onFinishBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)executeWithinOneFrame:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
