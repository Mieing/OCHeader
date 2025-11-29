@class NSIndexSet, NSSet, NSArray;

@interface IGListBatchUpdateData : NSObject

@property (readonly, nonatomic) NSIndexSet *insertSections;
@property (readonly, nonatomic) NSIndexSet *deleteSections;
@property (readonly, nonatomic) NSSet *moveSections;
@property (readonly, nonatomic) NSArray *insertIndexPaths;
@property (readonly, nonatomic) NSArray *deleteIndexPaths;
@property (readonly, nonatomic) NSArray *moveIndexPaths;

+ (void)_cleanIndexPathsWithMap:(const void *)a0 moves:(id)a1 indexPaths:(id)a2 deletes:(id)a3 inserts:(id)a4;

- (id)debugDescriptionLines;
- (id)initWithInsertSections:(id)a0 deleteSections:(id)a1 moveSections:(id)a2 insertIndexPaths:(id)a3 deleteIndexPaths:(id)a4 moveIndexPaths:(id)a5;
- (void).cxx_destruct;
- (id)description;

@end
