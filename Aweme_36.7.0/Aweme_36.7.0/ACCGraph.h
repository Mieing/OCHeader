@class NSArray, NSMutableArray;

@interface ACCGraph : NSObject

@property (retain, nonatomic) NSMutableArray *edges;
@property (readonly, nonatomic) NSArray *graphEdges;

- (void)connectNodeA:(id)a0 toNodeB:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)removeEdge:(id)a0;

@end
