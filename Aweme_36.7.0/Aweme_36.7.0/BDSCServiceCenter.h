@class NSMutableDictionary, NSRecursiveLock;

@interface BDSCServiceCenter : NSObject {
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *sceneToServiceMap;
@property (retain, nonatomic) NSMutableDictionary *hashProtocolService;

+ (id)defaultCenter;

- (Class)getClassWithProtocol:(id)a0;
- (id)getServiceWithProtocol:(id)a0;
- (void)bindClass:(Class)a0 withProtocol:(id)a1 sceneType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (id)requiredServices;

@end
