@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AWENewCoverEditToolBarDataManager : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSArray *orderArray;

- (BOOL)addBarItem:(id)a0;
- (void)removeBarItem:(void *)a0;
- (id)getBarItemWithItemId:(void *)a0;
- (unsigned long long)getIndexWithItemId:(void *)a0;
- (id)getBarItemWithIndex:(unsigned long long)a0;
- (void)sortArray;
- (void).cxx_destruct;
- (id)init;
- (id)barItems;

@end
