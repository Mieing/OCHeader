@class NSString;

@interface RTVQosVirtualNode : RTVQosNodeV2

@property (readonly, copy, nonatomic) NSString *referenceNodeKey;

- (void)qosNode:(id)a0 didChangeToSkipped:(BOOL)a1;
- (void)__reportDataIfNeeded;
- (void)__handleDenependentNode:(id)a0 stateChange:(id)a1;
- (BOOL)__checkDependentNodesIsAllSuccess;
- (BOOL)__checkDependentNdoesIsAllSkipped;
- (id)__dependencyIdentifierKey;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (void)cancelIfNeeded;

@end
