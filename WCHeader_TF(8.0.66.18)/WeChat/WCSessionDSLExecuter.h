@class WCSessionDSLExplainer;

@interface WCSessionDSLExecuter : MMObject

@property (retain, nonatomic) WCSessionDSLExplainer *sessionDSLExplainer;

- (id)init;
- (id)executeInstruction:(id)a0 withDataPath:(id)a1;
- (BOOL)checkJsonRightful:(id)a0;
- (void).cxx_destruct;

@end
