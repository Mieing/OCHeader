@class NSString;

@interface BDXLegacyLynxBridgeMonitor : NSObject <BDLynxBridgeListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setup;

- (void)lynxBridge:(id)a0 willCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 didCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 willHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 didHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 willCallback:(id)a1;
- (void)lynxBridge:(id)a0 didCallback:(id)a1;
- (id)__paramsWithContainer:(id)a0;
- (id)__monitorWithContainer:(id)a0;

@end
