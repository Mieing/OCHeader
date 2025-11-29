@class JSWorkerBridge, NSString, NSDictionary, JSWorkerBridgeEngine;

@interface AnnieXWorkerModuleWrapper : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (copy, nonatomic) NSString *workerId;
@property (retain, nonatomic) JSWorkerBridge *xBridge;
@property (retain, nonatomic) JSWorkerBridgeEngine *bridgeEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
