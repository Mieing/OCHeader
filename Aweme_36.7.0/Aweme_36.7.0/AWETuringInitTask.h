@class NSString;

@interface AWETuringInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSecurityConfig;
+ (void)execute;
+ (id)sharedInstance;

- (void)executeTask;

@end
