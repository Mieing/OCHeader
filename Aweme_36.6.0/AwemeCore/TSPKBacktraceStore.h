@class NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKBacktraceStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutableBacktraceDic;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)shared;

- (id)findMatchedBacktraceWithPipelineType:(id)a0 beforeTimestamp:(double)a1;
- (void)saveCustomCallBacktraceWithPipelineType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
