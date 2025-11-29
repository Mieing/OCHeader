@class NSString, NSMutableDictionary, NSMutableSet;

@interface IESLiveInteractPerformanceStrategyServiceImpl : NSObject <IESLiveInteractPerformanceStrategyService>

@property (retain, nonatomic) NSMutableDictionary *strategyCallBacks;
@property (retain, nonatomic) NSMutableDictionary *allStrategies;
@property (retain, nonatomic) NSMutableSet *registeredNames;
@property (retain, nonatomic) NSMutableDictionary *lynxCallbackMap;
@property (retain, nonatomic) NSMutableDictionary *lynxNameToCallIdMap;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (long long)currentDeviceType:(BOOL)a0;
- (id)registerStrategy:(id)a0 strategy:(id /* block */)a1;
- (id)lynxRegisterStrategy:(id)a0 strategy:(id /* block */)a1;
- (id)registerStrategies:(id)a0 strategies:(id /* block */)a1;
- (BOOL)unregisterCallbackId:(id)a0;
- (BOOL)unregisterCallbackIds:(id)a0;
- (void)unregisterAllStrategies;
- (id)getStrategyWithNames:(id)a0;
- (id)generateStrategyFromMap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)currentLevel;
- (void)dealloc;

@end
