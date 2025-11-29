@class NSString;

@interface AWELightLocationLaunchTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestLightLocationWithAccuracy:(long long)a0;
+ (void)execute;


@end
