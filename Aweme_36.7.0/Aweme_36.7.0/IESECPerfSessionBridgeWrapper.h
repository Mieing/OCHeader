@interface IESECPerfSessionBridgeWrapper : NSObject

+ (void)writeSessionStage:(id)a0 stageType:(id)a1 timestamp:(double)a2 extraData:(id)a3 targetSession:(id)a4;
+ (void)readSessionData:(id)a0 stage:(id)a1 completion:(id /* block */)a2;

@end
