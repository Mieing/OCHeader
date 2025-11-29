@class NSString;

@interface AWEHPHambSettingsNetworkManager : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)p_handleResponse:(id)a0;
- (id)getBodyInRequest:(id)a0;
- (void)handleResponse:(id)a0;

@end
