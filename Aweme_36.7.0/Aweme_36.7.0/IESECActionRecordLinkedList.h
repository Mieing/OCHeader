@class IESECActionRecordLinkedListNode;

@interface IESECActionRecordLinkedList : NSObject

@property (retain, nonatomic) IESECActionRecordLinkedListNode *head;
@property (retain, nonatomic) IESECActionRecordLinkedListNode *tail;

- (void)addNodeWithData:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;

@end
