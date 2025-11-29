@class NSString;

@interface CJPayBridgePlugin_dypay : TTBridgePlugin <CJPayAPIDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)onResponse:(id)a0;
- (id)p_errorCode:(long long)a0;
- (void)p_startDyPayProcessWithNewConstruct:(id)a0;
- (id)p_buildDyPayProcessConfigModelWithSchemaParams:(id)a0;
- (id)p_detectContainerWayFromURL:(id)a0;
- (void)dypayWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void).cxx_destruct;

@end
