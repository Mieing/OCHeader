@class NSString;

@interface MicroMerchantFoldInterceptor : NSObject <TimelineRequestInterceptorImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)intercept:(id)a0;
- (id)identifier;

@end
