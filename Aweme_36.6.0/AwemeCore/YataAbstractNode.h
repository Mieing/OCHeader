@class NSString, NSMutableArray;

@interface YataAbstractNode : NSObject

@property (nonatomic) long long nodeIndex;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) YataAbstractNode *parent;
@property (retain, nonatomic) NSMutableArray *children;

- (void)checkCycleNode:(id)a0;
- (void)innerPostVisit:(id /* block */)a0 stop:(BOOL *)a1;
- (void)innerPreVisit:(id /* block */)a0 stop:(BOOL *)a1;
- (void)adoptChild:(id)a0;
- (void)dropChild:(id)a0;
- (void)postVisit:(id /* block */)a0;
- (void)preVisit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
