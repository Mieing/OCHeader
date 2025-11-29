@class NSString;

@interface IESAccountTTAccountSetup : NSObject <TTAccountXBridgeDelegate, TTAccountLogoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)thirdPartyAuth:(id)a0 handler:(id /* block */)a1;
- (void)logoutStart:(id /* block */)a0 input:(id)a1;
- (void)logoutFinished:(id)a0;

@end
