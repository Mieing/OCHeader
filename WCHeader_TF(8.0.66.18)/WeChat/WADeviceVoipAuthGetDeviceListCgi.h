@class NSString;
@protocol WADeviceVoipAuthGetDeviceListCgiDelegate;

@interface WADeviceVoipAuthGetDeviceListCgi : WCBaseCgi

@property (weak, nonatomic) id<WADeviceVoipAuthGetDeviceListCgiDelegate> delegate;
@property (copy, nonatomic) NSString *appId;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
