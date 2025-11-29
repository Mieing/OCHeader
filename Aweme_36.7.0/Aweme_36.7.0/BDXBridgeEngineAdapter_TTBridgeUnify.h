@class NSSet, NSString;
@protocol TTBridgeEngine;

@interface BDXBridgeEngineAdapter_TTBridgeUnify : NSObject <BDXBridgeEngineAdapterProtocol>

@property (class, nonatomic) BOOL compitableWebV1;
@property (class, copy, nonatomic) NSSet *firstBridgeNames;

@property (retain, nonatomic) id<TTBridgeEngine> engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)mappedAuthType:(long long)a0;
+ (void)registerGlobalMethodWithMethodName:(id)a0 authType:(long long)a1 engineTypes:(unsigned long long)a2 callHandler:(id /* block */)a3;
+ (void)deregisterGlobalMethodWithMethodName:(id)a0;
+ (void)registerMethodWithMethodName:(id)a0 authType:(long long)a1 engineTypes:(unsigned long long)a2 callHandler:(id /* block */)a3 inRegistry:(id)a4;
+ (long long)mappedEngineTypes:(unsigned long long)a0;

- (void)fireEventWithEventName:(id)a0 params:(id)a1;
- (void)registerLocalMethodWithMethodName:(id)a0 authType:(long long)a1 engineTypes:(unsigned long long)a2 callHandler:(id /* block */)a3;
- (void)deregisterLocalMethodWithMethodName:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
