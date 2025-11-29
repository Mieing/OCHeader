@class NSString;

@interface PIAXBridgeDispatcher : NSObject <PIABridgeDispatchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithAPIInfo:(id)a0 params:(id)a1 instance:(id)a2 callBack:(id /* block */)a3;

@end
