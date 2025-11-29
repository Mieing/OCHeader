@class _TtC14RelaxFramework21ListEventScrollDetail, _TtC14RelaxFramework10DiffResult, NSMutableArray;

@interface RelaxFramework.ListEventLayoutCompleteDetail : NSObject

@property (nonatomic) int layoutId;
@property (nonatomic, retain) _TtC14RelaxFramework21ListEventScrollDetail *scrollInfo;
@property (nonatomic, retain) _TtC14RelaxFramework10DiffResult *diffResult;
@property (nonatomic, retain) NSMutableArray *visibleCellsAfterUpdate;
@property (nonatomic, retain) NSMutableArray *visibleCellsBeforeUpdate;

- (id)initWithLayoutId:(int)a0 scrollInfo:(id)a1 diffResult:(id)a2 visibleCellsAfterUpdate:(id)a3 visibleCellsBeforeUpdate:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
