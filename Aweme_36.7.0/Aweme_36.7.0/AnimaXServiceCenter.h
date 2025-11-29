@class NSMutableDictionary;

@interface AnimaXServiceCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *scopedServices;

+ (id)sharedInstance;

- (void)registerService:(id)a0 withImpl:(id)a1;
- (void)registerServiceWithScope:(id)a0 protocol:(id)a1 withImpl:(id)a2;
- (id)getServiceWithScope:(id)a0 protocol:(id)a1;
- (void)unregisterServiceWithScope:(id)a0 protocol:(id)a1;
- (void)unregisterAllServicesWithScope:(id)a0;
- (void)unregisterAllServices;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterService:(id)a0;
- (id)getService:(id)a0;

@end
