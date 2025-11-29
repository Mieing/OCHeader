@class NSString;

@interface AWESearchBundleActivator : NSObject <IESGurdEventDelegate, HTSAppLifeCycle, BCAABundleActivator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleDOUYINLiteAdapterClass;

- (void)bundleDidStart:(id)a0;
- (id)aAWESearchModuleDOUYINLiteAdapter;

@end
