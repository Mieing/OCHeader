@class NSString;

@interface AWETeenModule : NSObject <HTSAppLifeCycle>

@property (nonatomic) unsigned long long becomeActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;

@end
