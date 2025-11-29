@class NSString;

@interface AWEDylibJSBridgeRegister : NSObject <BCAABundleListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDylibJSBridge:(id /* block */)a0;
+ (void)registerAWEJS2NativeHandler:(id /* block */)a0;
+ (void)registerDylibLynxBridge:(id /* block */)a0;
+ (void)ensureSegmentInfoLoaded;
+ (id)sharedInstance;


@end
