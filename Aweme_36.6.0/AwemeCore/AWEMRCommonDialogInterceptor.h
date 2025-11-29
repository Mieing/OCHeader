@class NSString;

@interface AWEMRCommonDialogInterceptor : NSObject <AWEAlertInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptorActionBeforeTriggerEventWithEvent:(id)a0;

@end
