@class NSString;

@interface AWECommerceModule : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (void)toastDouplusCallbackWithURL:(id)a0 andHandle:(id)a1;

@end
