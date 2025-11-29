@class NSString, NSLock, NSMutableDictionary;

@interface AWEJSBridgeCameraManager : NSObject <AWEStudioComposerFlowMessage> {
    NSLock *m_lock;
    NSMutableDictionary *m_map;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)composerFlowDidExit:(id)a0;
- (void)callbackWithError:(id)a0 creationID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addInstance:(id)a0;

@end
