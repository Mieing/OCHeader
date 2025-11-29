@class BCAABundleServiceProxy, NSString, NSBundle, NSValue;

@interface BCAAServiceReference : NSObject

@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) Class serviceCls;
@property (nonatomic) BOOL isLoadable;
@property (nonatomic) BOOL isweakProxy;
@property (readonly, nonatomic) NSValue *instancePointer;
@property (retain, nonatomic) BCAABundleServiceProxy *serviceProxy;
@property (weak, nonatomic) BCAABundleServiceProxy *weakProxy;

- (void)registerService:(Class)a0 forBundle:(id)a1 pointer:(id)a2;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;

@end
