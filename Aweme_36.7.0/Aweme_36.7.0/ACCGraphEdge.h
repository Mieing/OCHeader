@class ACCGraphNode;

@interface ACCGraphEdge : NSObject

@property (retain, nonatomic) ACCGraphNode *nodeA;
@property (retain, nonatomic) ACCGraphNode *nodeB;

- (void).cxx_destruct;
- (id)description;

@end
