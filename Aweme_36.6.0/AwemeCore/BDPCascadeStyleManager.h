@class NSMutableDictionary;

@interface BDPCascadeStyleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *clsNodeMap;
@property (retain, nonatomic) NSMutableDictionary *nodeTrees;

+ (id)sharedManager;

- (id)styleNodeForClass:(Class)a0 category:(id)a1;
- (void)applyStyleForObject:(id)a0 category:(id)a1;
- (id)styleNodeForClass:(Class)a0 category:(id)a1 autoCreate:(BOOL)a2;
- (id)nodeWithClass:(Class)a0 category:(id)a1;
- (void).cxx_destruct;

@end
