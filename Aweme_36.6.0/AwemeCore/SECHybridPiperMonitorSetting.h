@class NSSet, NSDictionary;

@interface SECHybridPiperMonitorSetting : NSObject

@property (copy, nonatomic) NSSet *unwantedScriptMessage;
@property (nonatomic) BOOL monitorScriptMessageOnlyString;
@property (copy, nonatomic) NSSet *scriptMessageFuncKeys;
@property (copy, nonatomic) NSSet *unwantedIframeSchemes;
@property (copy, nonatomic) NSDictionary *bridgeMonitorConfig;
@property (copy) NSSet *exemptionMsg;
@property (copy) NSSet *exemptionLynxModule;
@property (copy) NSSet *focusMsg;
@property (copy) NSSet *focusLynxModule;
@property BOOL extractLynxPiperInSync;

- (BOOL)shouldSkipPiper:(id)a0;
- (BOOL)shouldSkipLynxModule:(id)a0;
- (BOOL)shouldSKipKey:(id)a0 withExemption:(id)a1 focus:(id)a2;
- (BOOL)shouldSkipPiper:(id)a0 moduleName:(id)a1 onPlatform:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
