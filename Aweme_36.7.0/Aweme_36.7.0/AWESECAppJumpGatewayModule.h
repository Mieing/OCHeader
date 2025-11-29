@interface AWESECAppJumpGatewayModule : NSObject

+ (long long)appJumpContext:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2 source:(id)a3;
+ (id)findArbiterWithRiskLevel:(unsigned long long)a0 source:(id)a1;
+ (void)recordErrorToThreadWithArbiter:(id)a0;
+ (long long)executeArbiter:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
+ (id)blockToastWithRulerResult:(id)a0;
+ (id)createDialogBluePrintWithRulerResult:(id)a0;
+ (void)executeSecLinkArbiterInMainThreadByForce:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
+ (void)executeSecLinkArbiter:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
+ (id)decisionMaker;

@end
