@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFeedContainerBaseConfig : NSObject <NSCopying, AWEFeedContainerBaseConfigProtocol, AWEFeedContainerBaseConfigExtensionProtocol>

@property (retain, nonatomic) NSMutableDictionary *instanceContainer;
@property (retain, nonatomic) NSMutableDictionary *blockContainer;
@property (retain, nonatomic) NSMutableDictionary *classContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfig;

- (id)serviceConfig;
- (id)controllerConfig;
- (id)controllerClassMethodConfig;
- (void)registerBizConfigClass:(Class)a0 forProtocol:(id)a1;
- (void)registerBizConfigInstance:(id)a0 forProtocol:(id)a1;
- (id)bizConfigForProtocol:(id)a0;
- (void)registerFactoryBlock:(id /* block */)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
