@class JSWorkerBridge, NSString, NSDictionary, JSWorkerBridgeEngine;
@protocol IESLatchLynxBridgeExcutorProtocol, IESLatchLynxModuleWrapperDelegate;

@interface IESLatchLynxModuleWrapper : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) id<IESLatchLynxModuleWrapperDelegate> delegate;
@property (retain, nonatomic) NSString *latchID;
@property (retain, nonatomic) id<IESLatchLynxBridgeExcutorProtocol> excutor;
@property (retain, nonatomic) JSWorkerBridge *exBridge;
@property (retain, nonatomic) JSWorkerBridgeEngine *bridgeEntry;
@property (copy, nonatomic) NSString *href;
@property (nonatomic) BOOL enableXBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParam:(id)a0;
- (void)call:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (BOOL)canFallbackXBridge;
- (id)p_getResultWrapperWithCode:(unsigned long long)a0 result:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
