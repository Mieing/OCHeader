@class NSMutableDictionary;

@interface CJPayOuterBridgePluginManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bridgeRegistry;

+ (void)registerOuterBridge:(id)a0 forMethod:(id)a1;
+ (id)bridgeForMethod:(id)a0;
+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
