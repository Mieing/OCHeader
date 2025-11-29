@class NSMutableArray, NSRecursiveLock;

@interface PIAObjectDeallocBlocks : NSObject

@property (nonatomic) id parent;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSMutableArray *blockArray;

- (id)initWithParent:(id)a0 deallocBlock:(id /* block */)a1;
- (void)addDeallocBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
