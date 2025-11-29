@class NSString, NSMutableDictionary;

@interface OCRTransJSHandler : WSTemplateBaseJSHandler

@property (retain, nonatomic) NSString *imageTransDataJsonStr;
@property (nonatomic) long long ocrResultType;
@property (retain, nonatomic) NSMutableDictionary *imageTransDataCallbackID2RequestIDMap;
@property (retain, nonatomic) NSString *senderUserName;

- (id)init;
- (void)setImageTransDataJsonStr:(id)a0 withOcrResultType:(long long)a1;
- (unsigned long long)getLocalJSBusinessType;
- (void)sendJsEventOnTapTopBar;
- (id)jsEventsNeedRegister;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)a0 params:(id)a1 callbackID:(id)a2;
- (void)handleJSAPIGetImageTransDataWithParams:(id)a0 callbackID:(id)a1;
- (void)handleJSAPISendWithParams:(id)a0 callbackID:(id)a1;
- (void)handleJSAPICopyWithParams:(id)a0 callbackID:(id)a1;
- (void)handleJSAPICollectWithParams:(id)a0 callbackID:(id)a1;
- (void)handleJSAPISetTitleWithParams:(id)a0 callbackID:(id)a1;
- (void)handleJSAPIShakeWithParams:(id)a0 callbackID:(id)a1;
- (void)notifyImageTransDataJsonStrWithCallbackID:(id)a0;
- (void).cxx_destruct;

@end
