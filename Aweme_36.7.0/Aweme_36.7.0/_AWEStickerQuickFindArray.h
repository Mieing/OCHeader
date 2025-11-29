@class NSMutableArray, NSHashTable;

@interface _AWEStickerQuickFindArray : NSMutableArray

@property (retain, nonatomic) NSHashTable *table;
@property (retain, nonatomic) NSMutableArray *arrM;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (id)array;
- (unsigned long long)count;

@end
