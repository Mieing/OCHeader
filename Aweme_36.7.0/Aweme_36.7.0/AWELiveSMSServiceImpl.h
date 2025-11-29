@class NSString;

@interface AWELiveSMSServiceImpl : NSObject <IESLiveSMSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pr_startSMSAuthenticationWithCompletion:(id /* block */)a0;
- (id)liveResponseFromTwiceVerifyResponse:(id)a0;
- (void)startSMSAuthenticationWithCompletion:(id /* block */)a0;

@end
