@class SpeedTestReportReq;

@interface WCSpeedTestReportCgi : WCBaseCgi

@property (retain, nonatomic) SpeedTestReportReq *speedTestReportRequest;

- (id)init;
- (void)startRequest:(id)a0 connectionTime:(unsigned int)a1 connectionRetCode:(unsigned int)a2 tranTime:(unsigned int)a3 transRetCode:(unsigned int)a4 clinetIp:(id)a5 clientPort:(unsigned int)a6 serverIp:(id)a7 serverPort:(unsigned int)a8 localStack:(unsigned int)a9;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
