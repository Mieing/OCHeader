@class NSArray, NSString, TIMXSDKInstance;

@interface TIMXDispatchQueuePool : NSObject <TIMXInstanceScopeSingleton, TIMXInstanceDispatchQueuePoolProtocol, TIMXDispatchQueuePoolProtocol>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) unsigned long long maxQueueCount;
@property (copy, nonatomic) NSArray *poolsArray;
@property (nonatomic) BOOL enableUseQueuePool;
@property (copy, nonatomic) NSString *queueNamePrefix;
@property (nonatomic) BOOL didSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setupWithMaxQueueCount:(unsigned long long)a0 queueNamePrefix:(id)a1;
- (id)initWithMaxQueueCount:(unsigned long long)a0 queueNamePrefix:(id)a1;
- (id)queueWithQOS:(long long)a0;
- (id)createConcurrentOperatonQueueWithLabel:(const char *)a0 qos:(long long)a1;
- (void)setupWithMaxQueueCount:(unsigned long long)a0 queueNamePrefix:(id)a1 enableUseQueuePool:(BOOL)a2;
- (id)realPoolWithQOS:(long long)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
