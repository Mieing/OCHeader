@class NSString;

@interface AWEXBridgeKitBootTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeTask;
+ (void)initBridgeEngine;
+ (void)handleRegistJSBGlobalMethodsTask;
+ (void)execute;


@end
