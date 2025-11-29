@class TempoVariableZone, TempoFunction;

@interface TempoExecuteFunction : NSObject

@property (retain, nonatomic) TempoFunction *function;
@property (nonatomic) BOOL returnFlag;
@property (retain, nonatomic) id returnData;
@property (retain, nonatomic) TempoVariableZone *topZone;

- (id)variableValueForName:(id)a0;
- (void)pushVariableZone;
- (void)popVariableZone;
- (id)initWithFunctionDefine:(id)a0;
- (id)topVariableZone;
- (id)variableZoneForName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
