@class WCPayJSOpenOfflinePayControlLogic, NSMutableDictionary, NSString;

@interface WAJSEventHandler_openOfflinePayView : WAJSEventHandler_BaseEvent <WCPayJSOpenOfflinePayControlLogicDelegate>

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) WCPayJSOpenOfflinePayControlLogic *openOfflinePayLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)succToOpenOfflinePayLogic;
- (void)failToStartOpenOfflinePayLogic;
- (void)returnToOfflinePayView;
- (void).cxx_destruct;

@end
