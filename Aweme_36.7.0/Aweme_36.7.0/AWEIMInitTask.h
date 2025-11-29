@class NSString;

@interface AWEIMInitTask : NSObject <HTSBootTask, HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeReal;
+ (void)execute;

- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;

@end
