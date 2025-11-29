@class NSString;

@interface AWEMRAlertInterceptorDispatcher : NSObject <AWEAlertInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interceptorActionBeforeTrackWithContext:(id)a0;
- (void)interceptorActionAfterCanShowCheck:(id)a0 completion:(id /* block */)a1;

@end
