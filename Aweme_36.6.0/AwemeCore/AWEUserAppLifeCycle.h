@class NSString;

@interface AWEUserAppLifeCycle : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (BOOL)onHandleAppContinueUserActivity;

@end
