@class SECEventFlowTaggedEventNode, SECEventFlowBounds;

@interface SECEventFlowBoundsIter : NSObject

@property (retain, nonatomic) SECEventFlowBounds *bounds;
@property (retain, nonatomic) SECEventFlowTaggedEventNode *node;

- (BOOL)reachEnd;
- (BOOL)reachStart;
- (BOOL)isEqualToIter:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (void)prev;
- (id)tag;
- (void)next;
- (id)event;
- (BOOL)isNull;

@end
