@class NSString, NSMutableSet, NSMutableArray;

@interface MiniTaskCollectionSectionModel : NSObject

@property (retain, nonatomic) NSMutableSet *cellSet;
@property (retain, nonatomic) NSMutableArray *cellModels;
@property (nonatomic) long long sectionType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hideHeader;
@property (nonatomic) BOOL allowEdit;
@property (nonatomic) BOOL allowClearAll;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL canLoadMore;

+ (id)sectionWithType:(long long)a0 title:(id)a1 cellModels:(id)a2;

- (id)init;
- (long long)count;
- (id)lastObject;
- (void)appendCellModels:(id)a0;
- (long long)insertOrderedCellModel:(id)a0;
- (BOOL)removeObjectAtIndex:(long long)a0;
- (void)removeAllCellModels;
- (void)replaceObjectAtIndex:(long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(long long)a1;
- (void)addObject:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;

@end
