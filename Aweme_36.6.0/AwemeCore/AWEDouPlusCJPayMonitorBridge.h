@class AWEJSBridge, NSString;

@interface AWEDouPlusCJPayMonitorBridge : NSObject <AWEYAPOuterBridgeProtocol>

@property (weak, nonatomic) AWEJSBridge *commerceBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceive:(id)a0 withCallback:(id /* block */)a1 inViewController:(id)a2;
- (void).cxx_destruct;

@end
