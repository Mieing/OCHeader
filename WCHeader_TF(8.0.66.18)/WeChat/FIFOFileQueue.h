@class NSMutableArray;

@interface FIFOFileQueue : FileQueue {
    NSMutableArray *m_arrItems;
}

- (void)dealloc;
- (id)getArchiveTarget;
- (void)setUnArchiveResult:(id)a0;
- (BOOL)push:(id)a0;
- (BOOL)pop;
- (BOOL)modifyTop:(id)a0;
- (id)getTop;
- (id)getAll;
- (BOOL)clear;
- (id)description;
- (BOOL)removeItemAtIndex:(unsigned long long)a0;
- (BOOL)removeItems:(id)a0;
- (id)getItemAtIndex:(unsigned long long)a0;
- (BOOL)syncData;
- (void).cxx_destruct;

@end
