@class NSString;

@interface WADeviceVoipAuthService : MMUserService <WADeviceVoipAuthGetDeviceListCgiDelegate, WADeviceVoipAuthModCgiDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchVoipDeviceList:(id)a0;
- (void)didFetchDeviceVoipAuthDeviceList:(id)a0 cgi:(id)a1;
- (void)didFailToFetchDeviceWithError:(id)a0 cgi:(id)a1;
- (void)updateVoipDeviceAuthStatus:(id)a0;
- (void)didModDeviceVoipAuthStatus:(id)a0;
- (void)didFailToModDeviceAuthStatusWithError:(id)a0 cgi:(id)a1;

@end
