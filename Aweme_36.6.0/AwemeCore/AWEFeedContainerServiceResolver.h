@class NSString, NSMutableDictionary;
@protocol AWEFeedContainerSafeWrapperProtocol, AWEFeedContainerBaseConfigProtocol;

@interface AWEFeedContainerServiceResolver : NSObject <AWEFeedContainerServiceResolverProtocol>

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMutableDictionary *servicesDict;
@property (retain, nonatomic) NSMutableDictionary *classDict;
@property (retain, nonatomic) id<AWEFeedContainerBaseConfigProtocol> containerConfig;
@property (retain, nonatomic) id<AWEFeedContainerSafeWrapperProtocol> containerWrapper;
@property (copy, nonatomic) id /* block */ setupServiceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (id)instanceForProtocol:(id)a0;
- (void)configServiceInstance:(id)a0;
- (void)registerInstance:(id)a0 forProtocol:(id)a1;
- (void)registerClass:(Class)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
