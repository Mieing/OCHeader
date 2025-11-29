@class NSString;

@interface AWEShowMonetizeAOOPCommonInterceptor : NSObject <AWEShowMonetizeAOOPInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)interceptorType;
- (id)shouldInterceptWithContext:(id)a0;

@end
