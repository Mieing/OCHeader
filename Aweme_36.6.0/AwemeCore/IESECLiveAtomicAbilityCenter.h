@class NSString, NSMutableDictionary;

@interface IESECLiveAtomicAbilityCenter : NSObject <IESECLiveAtomicAbilityServerService, IESECLiveAtomicAbilityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *actionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindWithBehavior:(id)a0 serviceName:(id)a1 action:(SEL)a2;
- (void)behaviorExecuteWithLiveContext:(id)a0 behavior:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)behaviorExecuteWithLiveContext:(id)a0 serverActionParams:(id)a1 completion:(id /* block */)a2;
- (void)trackActionWithLiveContext:(id)a0 forActionParams:(id)a1;
- (id)addExtraParams:(id)a0 forActionParams:(id)a1;
- (void).cxx_destruct;

@end
