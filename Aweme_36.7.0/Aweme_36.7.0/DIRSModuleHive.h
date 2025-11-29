@class DIRSConcurrentCollection, DIRSContext;

@interface DIRSModuleHive : NSObject {
    DIRSConcurrentCollection *moduleRefs;
    DIRSConcurrentCollection *pluginRefs;
    DIRSConcurrentCollection *protocolRefs;
}

@property (weak, nonatomic) DIRSContext *context;

- (id)loadUsingId:(id)a0;
- (id)exportFeatureParameters;
- (id)exportFeatureOptions;
- (void)raiseError:(id)a0 isFatal:(BOOL)a1 withUserInfo:(id)a2;
- (void)notify:(id)a0 selector:(SEL)a1 arguments:(id)a2;
- (id)loadUsingClass:(Class)a0;
- (id)pluginList;
- (id)loadUsingProtocol:(id)a0;
- (void)_active:(id)a0;
- (void)_notifyTarget:(id)a0 performSelector:(SEL)a1 withObjects:(id)a2;
- (id)moduleList;
- (id)exportCommonParameters:(id)a0;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)suspend;
- (void)start;
- (void)resume;

@end
