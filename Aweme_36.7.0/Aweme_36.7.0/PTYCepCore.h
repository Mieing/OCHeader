@class NSString;

@interface PTYCepCore : NSObject <PTYCepProtocol>

@property (readonly, copy, nonatomic) NSString *aid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)callbackWithBizName:(id)a0 result:(const void *)a1 callback:(id /* block */)a2;
+ (void)callbackWithBizName:(const void *)a0 ruleName:(const void *)a1 matchedEventsSequences:(const void *)a2 matchVariablesSequences:(const void *)a3 callback:(id /* block */)a4;

- (void)unregisterCallback:(id)a0 rule:(id)a1;
- (void)registerCallback:(id)a0 rule:(id)a1 callback:(id /* block */)a2 callbackMode:(unsigned long long)a3;
- (void)clean:(id)a0;
- (void)unregisterAction:(id)a0;
- (void)onEvent:(id)a0 params:(id)a1 timestamp:(long long)a2;
- (void)registerCallback:(id)a0 callback:(id /* block */)a1 callbackMode:(unsigned long long)a2;
- (void)registerFunction:(id)a0 function:(id /* block */)a1;
- (void)unregisterFunction:(id)a0;
- (void)registerFunction:(id)a0 functionName:(id)a1 function:(id /* block */)a2;
- (void)unregisterFunction:(id)a0 functionName:(id)a1;
- (void)clean:(id)a0 rule:(id)a1;
- (void)disable:(id)a0 rule:(id)a1 clean:(BOOL)a2;
- (void)disable:(id)a0 rule:(id)a1 strategy:(unsigned long long)a2;
- (void)enable:(id)a0 rule:(id)a1;
- (void)registerAction:(id)a0 action:(id /* block */)a1 config:(id)a2;
- (id)getEnabledRules:(id)a0;
- (id)processEvent:(id)a0 rule:(id)a1 eventName:(id)a2 params:(id)a3 timestamp:(long long)a4;
- (id)initWithAid:(id)a0;
- (void).cxx_destruct;
- (struct shared_ptr<pitaya::CepCore> { struct CepCore *x0; struct __shared_weak_count *x1; })getCore;
- (void)unregisterCallback:(id)a0;

@end
