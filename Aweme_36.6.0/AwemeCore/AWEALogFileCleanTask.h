@class NSString;

@interface AWEALogFileCleanTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)alogCleanAllInstancesIfNeed;
+ (void)execute;


@end
