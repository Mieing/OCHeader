@class NSString;

@interface AWEReduceUselessAppLogTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localAppLogListConfig;
+ (void)setUselessAppLogBlackList:(id)a0;
+ (id)uselessAppLogBlackList;
+ (void)execute;


@end
