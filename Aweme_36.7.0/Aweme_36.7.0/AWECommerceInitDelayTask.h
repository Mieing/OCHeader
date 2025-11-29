@class NSString;

@interface AWECommerceInitDelayTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupROI2AddCommonParamsIfNeeded;
+ (void)executeAdCheckTask;
+ (void)execute;


@end
