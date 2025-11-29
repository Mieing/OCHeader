@class RTVInteractionRequestTask, NSMutableOrderedSet;

@interface RTVInteractionRequestInfo : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *requestTaskCache;
@property (readonly, nonatomic) NSMutableOrderedSet *waittingTasks;
@property (retain, nonatomic) RTVInteractionRequestTask *lastestRequestTask;

- (void).cxx_destruct;
- (id)init;

@end
