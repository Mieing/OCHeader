@class NSString;
@protocol AWEMVChannelAlertInterceptorDelegate;

@interface AWEMVChannelAlertInterceptor : NSObject <AWEAlertInterceptorDelegate>

@property (weak, nonatomic) id<AWEMVChannelAlertInterceptorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interceptorActionBeforeShowWithContext:(id)a0;
- (void)interceptorActionBeforeTriggerEventWithEvent:(id)a0;
- (void).cxx_destruct;

@end
