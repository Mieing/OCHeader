@class JSEvent, NSString, WCPayF2FJSAPIAuthenCgi;

@interface WCPayF2FJSApiAuthenticationControlLogic : WCPayControlLogic <WCPayF2FJSAPIAuthCgiDelegate>

@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) WCPayF2FJSAPIAuthenCgi *jsapiAuthenCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
