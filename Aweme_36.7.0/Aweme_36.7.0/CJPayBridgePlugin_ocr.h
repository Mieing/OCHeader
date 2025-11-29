@class NSString, NSDictionary, TTBridgeCommand;

@interface CJPayBridgePlugin_ocr : TTBridgePlugin <CJPayTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *trackBaseParam;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (weak, nonatomic) TTBridgeCommand *command;
@property (copy, nonatomic) NSString *saasSceneRecordKey;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)event:(id)a0 params:(id)a1;
- (void)ocrWithParams:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)p_openBankCardOCRWithParam:(id)a0 callback:(id /* block */)a1 controller:(id)a2;
- (void)p_openIDCardOCRWithParam:(id)a0 callback:(id /* block */)a1 controller:(id)a2;
- (void)p_openIDCardFrontOCRWithParam:(id)a0 callback:(id /* block */)a1 controller:(id)a2;
- (void)p_openCreditCertOCRWithParam:(id)a0 callback:(id /* block */)a1 controller:(id)a2;
- (void)p_openPassportOCRWithParam:(id)a0 callback:(id /* block */)a1 controller:(id)a2;
- (void)p_recordSaasScene:(id)a0;
- (void)p_resetSaasScene;
- (void)p_trackOcrResult:(unsigned long long)a0;
- (void).cxx_destruct;

@end
