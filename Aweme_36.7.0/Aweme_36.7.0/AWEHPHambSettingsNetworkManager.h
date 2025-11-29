@class NSString;

@interface AWEHPHambSettingsNetworkManager : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleResponse:(id)a0 withRequest:(id)a1;
- (void)getRequestBody:(id)a0 callback:(id /* block */)a1;

@end
