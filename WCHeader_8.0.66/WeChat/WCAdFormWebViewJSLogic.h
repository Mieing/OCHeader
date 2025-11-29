@class NSString, WCAdDynamicCanvasPageInfo, NSMutableDictionary;
@protocol WCAdFormWebViewJSLogicDelegate;

@interface WCAdFormWebViewJSLogic : LocalJSLogicBase <WCAdFormWebViewJSFunctionHandlerDelegate>

@property (retain, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSString *qrExtInfo;
@property (retain, nonatomic) NSMutableDictionary *jsFunctionHandlerDic;
@property (weak, nonatomic) id<WCAdFormWebViewJSLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0 pageInfo:(id)a1 componentId:(id)a2 qrExtInfo:(id)a3;
- (unsigned long long)getLocalJSBusinessType;
- (void)tryInjectWeixinJSBridge:(id)a0;
- (void)functionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)sendCallback:(id)a0 ret:(int)a1 error:(id)a2 data:(id)a3;
- (BOOL)dispatchJSEvent:(id)a0 param:(id)a1 callbackID:(id)a2;
- (BOOL)onOpenUrlInWebview:(id)a0 callbackID:(id)a1;
- (void)handlerSendCallback:(id)a0 ret:(int)a1 error:(id)a2 data:(id)a3;
- (void)handlerPublishEvent:(id)a0 params:(id)a1;
- (void)onPerformActionResult:(id)a0 resultData:(id)a1;
- (void).cxx_destruct;

@end
