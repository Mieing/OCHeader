@class NSString;

@interface AWEPrivacyModule : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;

@end
