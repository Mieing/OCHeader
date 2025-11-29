@class NSString;

@interface AWEIESBridgeAuthTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tabBarControllerViewDidAppear;
+ (void)execute;


@end
