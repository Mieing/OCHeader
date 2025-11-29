@class NSArray, NSMutableDictionary, NSString;

@interface BDARNewBridgeModule : BDARVLynxBridgeModule <BDLynxBridgeExecutor>

@property (retain, nonatomic) NSMutableDictionary *methodsForReward;
@property (copy, nonatomic) NSArray *baseBridgeMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (id)initWithParam:(id)a0;
- (BOOL)executeMethodWithMessage:(id)a0 onBridge:(id)a1 callback:(id /* block */)a2;
- (void)call:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (BOOL)hasParamModel:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (long long)priority;

@end
