@class NSString;

@interface AWEELynxCardBridgeEventCenter : NSObject <AWEECLynxCardBridgeEventCenterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)publishEventWithEventName:(id)a0 params:(id)a1 listContextId:(id)a2;
+ (void)publishEventWithEventName:(id)a0 params:(id)a1 isGlobal:(BOOL)a2 listContextId:(id)a3;
+ (void)publishEventWithEventName:(id)a0 params:(id)a1 eventID:(id)a2 isBroadcast:(BOOL)a3;
+ (void)publishEventWithEventName:(id)a0 params:(id)a1 isBroadcast:(BOOL)a2;


@end
