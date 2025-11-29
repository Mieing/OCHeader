@class NSString, BDUGLuckyTaskTimerXBridgeModel;

@interface BDUGLuckyTaskTimerXBridge : BDUGLuckyXBridgeMethod <BDUGLuckyCountDownTaskPendantDelegateProtocol>

@property (retain, nonatomic) BDUGLuckyTaskTimerXBridgeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)pendantIsReady;
- (void)pendantWillDestroy;
- (void)__createPendantWithModel:(id)a0;
- (void)__startTimerWithModel:(id)a0;
- (void)__stopTimerWithModel:(id)a0;
- (void)__finishTaskWithModel:(id)a0;
- (void)__setCountDownContainerHelper:(id)a0;
- (void).cxx_destruct;
- (id)methodName;

@end
