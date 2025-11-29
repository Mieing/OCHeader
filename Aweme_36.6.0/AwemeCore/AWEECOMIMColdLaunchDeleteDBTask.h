@class NSString;

@interface AWEECOMIMColdLaunchDeleteDBTask : NSObject <AWEECOMIMColdLaunchTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeTask;
+ (void)tryDeleteFixTwo;
+ (void)tryDeleteFixOne;


@end
