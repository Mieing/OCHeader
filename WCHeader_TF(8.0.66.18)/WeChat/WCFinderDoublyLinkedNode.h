@interface WCFinderDoublyLinkedNode : NSObject

@property (retain, nonatomic) WCFinderDoublyLinkedNode *prevNode;
@property (retain, nonatomic) WCFinderDoublyLinkedNode *nextNode;
@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;

- (id)initWithKey:(id)a0 value:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
