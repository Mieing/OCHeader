@class NSString;

@interface AWEStudioBootTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bizDowngradeStudioBootTask;
+ (id)diskOptimizeParams;
+ (void)execute;
+ (id)cacheQueue;


@end
