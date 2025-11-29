@class JSEvent, NSString;

@interface WebviewJSEventHandler_getEncryptHKPasswd : WebviewJSEventHandlerBase <WCPayJSGetEncryptHKPasswdLogicDelegate>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
