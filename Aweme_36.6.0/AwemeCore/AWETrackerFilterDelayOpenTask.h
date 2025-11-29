@class NSString;

@interface AWETrackerFilterDelayOpenTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterDelayLoadConfig;
+ (void)execute;


@end
