@class IESIMSendMsgFlowTracker, HMDThreadSafeArray, HMDThreadSafeDictionary, IESIMSendAttachmentDBHandler, NSString;

@interface IESIMSendMsgFlowManager : NSObject <IESIMFlowDelegate>

@property (retain, nonatomic) HMDThreadSafeArray *flows;
@property (retain, nonatomic) HMDThreadSafeDictionary *flowCompletionDict;
@property (retain, nonatomic) IESIMSendMsgFlowTracker *sendTracker;
@property (retain, nonatomic) IESIMSendAttachmentDBHandler *DBHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerFlow:(id)a0 completion:(id /* block */)a1;
- (void)flowEngineBegin:(id)a0 input:(id)a1 output:(id)a2;
- (void)flowEngineFinish:(id)a0 input:(id)a1 output:(id)a2;
- (void)flowEngineNodeStartWithInput:(id)a0 output:(id)a1;
- (void)flowEngineNodeEndWithInput:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)flowEngineUpdateProgress:(double)a0 input:(id)a1 output:(id)a2;
- (void)removeFlow:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
