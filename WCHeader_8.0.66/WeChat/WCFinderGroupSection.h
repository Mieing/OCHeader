@class NSMapTable, NSMutableDictionary, NSMutableOrderedSet;

@interface WCFinderGroupSection : NSObject <NSFastEnumeration>

@property (retain, nonatomic) NSMutableDictionary *maps;
@property (copy, nonatomic) id /* block */ mapper;
@property (retain, nonatomic) NSMutableOrderedSet *keys;
@property (retain, nonatomic) NSMapTable *objectMap;
@property (nonatomic) long long allElementCount;

- (id)initWithMapper:(id /* block */)a0;
- (long long)sectionCount;
- (long long)elementCount;
- (BOOL)hasElements;
- (id)allSection;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)nameForSection:(long long)a0;
- (long long)numberOfElementForSection:(long long)a0;
- (id)iterItemsForSection:(id)a0;
- (id)itemsForSection:(id)a0;
- (id)elementAtIndexPath:(id)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)indexPathForObject:(id)a0;
- (void).cxx_destruct;

@end
