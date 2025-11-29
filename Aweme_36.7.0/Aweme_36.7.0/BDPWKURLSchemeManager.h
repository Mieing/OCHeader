@class NSString;

@interface BDPWKURLSchemeManager : NSObject <BDPURLInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)startFileInterceptionWithWebview:(id)a0 config:(id)a1;

@end
