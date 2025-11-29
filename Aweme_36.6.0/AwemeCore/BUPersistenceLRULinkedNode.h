@class NSString;

@interface BUPersistenceLRULinkedNode : NSObject

@property (copy, nonatomic) NSString *nodeValue;
@property (retain, nonatomic) BUPersistenceLRULinkedNode *previous;
@property (retain, nonatomic) BUPersistenceLRULinkedNode *next;

- (id)initWithNodeVlaue:(id)a0;
- (void).cxx_destruct;

@end
