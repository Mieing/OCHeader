@class NSString;

@interface BDXBridgeWebProtocol : NSObject <BDXBridgeWebViewBridgeJSCallProtocol>

@property (class, readonly, nonatomic) NSString *jsMessageHandler;
@property (class, readonly, nonatomic) NSString *jsInvokeObject;
@property (class, readonly, nonatomic) NSString *jsInvokeMethod;
@property (class, readonly, nonatomic) NSString *callbackObject;
@property (class, readonly, nonatomic) NSString *callbackMethod;
@property (class, readonly, nonatomic) NSString *protocolName;
@property (class, readonly, nonatomic) unsigned long long xType;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callbackStringWithParams:(id)a0 callMessage:(id)a1;
+ (id)eventStringWithName:(id)a0 params:(id)a1;
+ (id)callMessageWithRawData:(id)a0;


@end
