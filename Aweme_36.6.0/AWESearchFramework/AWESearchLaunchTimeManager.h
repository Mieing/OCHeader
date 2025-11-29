@class NSString;

@interface AWESearchLaunchTimeManager : NSObject <HTSAppLifeCycle>

@property (nonatomic) BOOL didEnterBackground;
@property (nonatomic) double hotLaunchTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;

@end
