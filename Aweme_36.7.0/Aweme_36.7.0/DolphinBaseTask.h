@class DolphinTasksCooperator, NSDictionary, NSError, DolphinTaskContext;

@interface DolphinBaseTask : NSObject

@property (retain, nonatomic) DolphinTasksCooperator *cooperator;
@property (retain, nonatomic) DolphinTaskContext *taskContext;
@property (nonatomic) BOOL result;
@property (copy, nonatomic) NSDictionary *resultDict;
@property (retain, nonatomic) NSError *error;

- (void)taskExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0 error:(id)a1 Output:(id)a2;
- (void)onTaskInit;
- (BOOL)shouldBeExcuted:(BOOL)a0 error:(id)a1 input:(id)a2;
- (id)initWithCooperator:(id)a0 taskContext:(id)a1;
- (void).cxx_destruct;

@end
