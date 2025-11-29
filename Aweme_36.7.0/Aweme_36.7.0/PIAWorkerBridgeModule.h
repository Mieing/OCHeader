@class PIAWorkerMessagePort, NSString, NSDictionary, PIAContext;

@interface PIAWorkerBridgeModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) PIAWorkerMessagePort *port;
@property (weak, nonatomic) PIAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)log:(id)a0 level:(unsigned long long)a1;
- (id)getGlobalProps;
- (void)onReceivedWorkerMessage:(id)a0;
- (id)getWorkerName;
- (id)getHref;
- (id)getUserAgent;
- (void)postBridgeMessage:(id)a0;
- (id)getBridgeMessage;
- (void)importScriptsAsync:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)terminate;
- (void).cxx_destruct;
- (void)callback:(id)a0;
- (void)trace:(id)a0;
- (id)getMessage;

@end
