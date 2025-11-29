@class NSString;

@interface AWETimingCloseModule : NSObject <HTSAppLifeCycle>

@property (nonatomic) BOOL executedAppWillEnterForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onAppDidBecomeActiveFromResign;
- (void)onAppDidBecomeActiveFromBackground;

@end
