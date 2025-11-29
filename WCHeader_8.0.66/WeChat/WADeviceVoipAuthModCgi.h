@class WADeviceVoipAuthDeviceItem;
@protocol WADeviceVoipAuthModCgiDelegate;

@interface WADeviceVoipAuthModCgi : WCBaseCgi

@property (weak, nonatomic) id<WADeviceVoipAuthModCgiDelegate> delegate;
@property (retain, nonatomic) WADeviceVoipAuthDeviceItem *deviceItem;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
