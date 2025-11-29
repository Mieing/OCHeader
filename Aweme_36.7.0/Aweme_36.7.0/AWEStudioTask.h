@interface AWEStudioTask : NSObject <AWEStudioTask>

@property (retain, nonatomic) id inputData;
@property (copy, nonatomic) id /* block */ precheck;
@property (copy, nonatomic) id /* block */ execution;
@property (retain, nonatomic) id preExecuteInfo;
@property (copy, nonatomic) id /* block */ preExecute;

- (id)initWithExecution:(id /* block */)a0 promises:(id)a1;
- (id)initWithExecution:(id /* block */)a0 promises:(id)a1 inputData:(id)a2;
- (id)initWithExecution:(id /* block */)a0;
- (id)writeInfo:(id)a0;
- (id)preExecuteInfo:(id /* block */)a0;
- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;

@end
