@class NSMutableArray, SECEventFlowTaggedEventNode;

@interface SECEventFlowBounds : NSObject

@property (retain, nonatomic) SECEventFlowTaggedEventNode *startNode;
@property (retain, nonatomic) SECEventFlowTaggedEventNode *endNode;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) SECEventFlowBounds *rootBounds;
@property (retain, nonatomic) NSMutableArray *hitSceneCache;

- (id)initWithStartNode:(id)a0 endNode:(id)a1 isRoot:(BOOL)a2 fromBounds:(id)a3;
- (id)createIterFromStart;
- (id)initWithStartIter:(id)a0 endIter:(id)a1 isRoot:(BOOL)a2 fromBounds:(id)a3;
- (id)createIterFromEnd;
- (BOOL)containsIter:(id)a0;
- (void).cxx_destruct;

@end
