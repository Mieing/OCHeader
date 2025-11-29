@class NSMutableArray;

@interface AWEPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (readonly, nonatomic) BOOL isEmpty;

- (unsigned long long)p_binarySearchForInsert:(id)a0;
- (void)insertElement:(id)a0;
- (id)getHighestPriorityElement;
- (void)deleteHighestPriorityElement;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllElements;

@end
