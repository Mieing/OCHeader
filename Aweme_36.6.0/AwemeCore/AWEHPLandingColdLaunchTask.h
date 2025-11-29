@class NSString;

@interface AWEHPLandingColdLaunchTask : NSObject <HTSBootTask>

@property (nonatomic) BOOL hasExecute;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)execute;
+ (id)sharedInstance;

- (void)tryExecuteIfNeed;

@end
