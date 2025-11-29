@interface IESliveAudioSeatPriorityItem : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ endBlock;

+ (id)itemWithPriority:(long long)a0 startBlock:(id /* block */)a1 endBlock:(id /* block */)a2;

- (void).cxx_destruct;

@end
