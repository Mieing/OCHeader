@class NSString;

@interface AWEAlertCommerceInterceptor : NSObject <AWEAlertInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)interceptorActionBeforeShowWithContext:(id)a0;
- (id)interceptorActionBeforeTrackWithContext:(id)a0;

@end
