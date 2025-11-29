@class NSString;

@interface AWEIMSplitInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)splitScene;
+ (void)p_onGlobalTaskExecute:(id)a0;
+ (void)execute;


@end
