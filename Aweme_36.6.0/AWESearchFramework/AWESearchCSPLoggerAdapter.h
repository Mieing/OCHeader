@class NSString;

@interface AWESearchCSPLoggerAdapter : NSObject <CSPLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)csp_logWithTag:(id)a0 andContent:(id)a1;

@end
