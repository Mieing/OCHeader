@class NSString, NSMutableDictionary, NSArray, NSMutableArray;
@protocol AWESearchBaseContainerProtocol, AWESearchBaseServiceProtocol;

@interface AWESearchBaseContainerServiceManager : NSObject <AWESearchServiceManagerProtocol>

@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (weak, nonatomic) id<AWESearchBaseContainerProtocol> container;
@property (retain, nonatomic) NSMutableArray<AWESearchBaseServiceProtocol> *serviceInstanceArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (copy, nonatomic) NSArray *serviceNameArray;
@property (copy, nonatomic) NSArray *serviceConfigArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceManagerWithServiceNameArray:(id)a0;
+ (id)serviceManagerWithServiceConfigArray:(id)a0;

- (id)initWithServiceNameArray:(id)a0;
- (id)initWithServiceConfigArray:(id)a0;
- (id)configServieWithClass:(Class)a0 andConfig:(id)a1;
- (id)serviceArrayBySelector:(SEL)a0;
- (id)fetchServieWithServiceName:(id)a0;
- (void)loadServiceWithContainer:(id)a0;
- (void)removeAllService;
- (void)addService:(id)a0;
- (void).cxx_destruct;
- (void)removeService:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
