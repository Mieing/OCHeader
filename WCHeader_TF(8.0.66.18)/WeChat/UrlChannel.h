@class ProtobufCGIWrap, MMTimer, NSString, NSDate, NSURLConnection, NSMutableData;
@protocol NotifyFromPrtlDelegate;

@interface UrlChannel : NSObject {
    unsigned int m_uiRetryCount;
    unsigned int m_uiChannelStatus;
    unsigned int m_uiRetStatusCode;
    unsigned int m_uiRetContentLength;
    unsigned long long m_ui64StartTime;
    unsigned long long m_ui64ConnectStartTime;
    unsigned long long m_ui64SendStartTime;
    unsigned long long m_ui64ReceiveStartTime;
    unsigned long long m_uiTimeOutInSec;
    NSString *m_lastRequestIp;
    BOOL m_bStopRetry;
    BOOL m_bForceStopTimer;
}

@property (retain, nonatomic) ProtobufCGIWrap *m_wrapInfo;
@property (weak, nonatomic) id<NotifyFromPrtlDelegate> m_delNotifyFromPrtl;
@property (retain, nonatomic) NSURLConnection *m_ucChannel;
@property (retain, nonatomic) MMTimer *m_tmCheck;
@property (retain, nonatomic) NSDate *m_tLastRecvData;
@property (nonatomic) unsigned int m_uiMaxRetryCount;
@property (retain, nonatomic) NSMutableData *m_dtResponseData;
@property (copy, nonatomic) NSString *m_nsIP;

- (id)init;
- (void)dealloc;
- (void)InitPrtl:(id)a0;
- (BOOL)Start;
- (void)Stop;
- (void)TryReportFailIP;
- (void)ResetChannel;
- (void)Connect;
- (void)CheckTimeOut;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)onReceiveDataLength:(id)a0;
- (void).cxx_destruct;

@end
