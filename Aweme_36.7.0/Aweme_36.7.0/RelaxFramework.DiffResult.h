@class NSMutableArray;

@interface RelaxFramework.DiffResult : NSObject

@property (nonatomic, retain) NSMutableArray *insertions;
@property (nonatomic, retain) NSMutableArray *move_from;
@property (nonatomic, retain) NSMutableArray *move_to;
@property (nonatomic, retain) NSMutableArray *removals;
@property (nonatomic, retain) NSMutableArray *update_from;
@property (nonatomic, retain) NSMutableArray *update_to;

- (id)initWithInsertions:(id)a0 move_from:(id)a1 move_to:(id)a2 removals:(id)a3 update_from:(id)a4 update_to:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
