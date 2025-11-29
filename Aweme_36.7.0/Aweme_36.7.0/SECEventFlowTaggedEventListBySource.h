@class SECEventFlowTaggedEventNode;

@interface SECEventFlowTaggedEventListBySource : NSObject

@property (retain, nonatomic) SECEventFlowTaggedEventNode *head;
@property (retain, nonatomic) SECEventFlowTaggedEventNode *last;

- (void)addNodeToLast:(id)a0;
- (void)removeFirstNodeFromHead;
- (void).cxx_destruct;
- (id)init;
- (id)firstNode;

@end
