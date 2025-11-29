@class NSString;

@interface AWEUIConfigTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableAssertLib;
+ (void)preheatingDUXImage;
+ (void)customUIConfig;
+ (void)optimizeAWEUIKitIsIPhoneXImpl;
+ (void)_aweLazyRegisterLoad_Adapter;
+ (void)execute;


@end
