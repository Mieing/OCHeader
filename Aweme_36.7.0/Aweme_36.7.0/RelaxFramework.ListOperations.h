@class NSMutableArray;

@interface RelaxFramework.ListOperations : NSObject

@property (nonatomic, retain) NSMutableArray *insertAction;
@property (nonatomic, retain) NSMutableArray *removeAction;
@property (nonatomic, retain) NSMutableArray *updateAction;

- (id)initWithInsertAction:(id)a0 removeAction:(id)a1 updateAction:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
