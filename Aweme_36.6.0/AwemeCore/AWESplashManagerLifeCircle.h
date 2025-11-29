@class NSString;

@interface AWESplashManagerLifeCircle : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)uploadSessionEventIfNeed:(id)a0;

@end
