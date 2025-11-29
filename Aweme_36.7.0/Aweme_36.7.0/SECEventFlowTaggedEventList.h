@class SECEventFlowTaggedEventNode;

@interface SECEventFlowTaggedEventList : NSObject

@property (retain, nonatomic) SECEventFlowTaggedEventNode *head;
@property (retain, nonatomic) SECEventFlowTaggedEventNode *tail;

- (void)addNodeToTail:(id)a0;
- (void).cxx_destruct;
- (id)lastNode;
- (id)init;
- (void)removeNode:(id)a0;

@end
