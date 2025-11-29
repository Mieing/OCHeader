@class NSString, NSURLSessionTaskMetrics;

@interface AMapNetworkMonitorModel : NSObject

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (copy, nonatomic) NSString *serverIP;
@property (copy, nonatomic) NSString *urlPath;
@property (copy, nonatomic) NSString *csid;
@property (nonatomic) unsigned long long degradeType;
@property (copy, nonatomic) NSString *clientIP;
@property (copy, nonatomic) NSString *clientPort;
@property (copy, nonatomic) NSString *serverPort;
@property (copy, nonatomic) NSString *dnsTime;
@property (copy, nonatomic) NSString *sslTime;
@property (copy, nonatomic) NSString *tcpTime;
@property (copy, nonatomic) NSString *connectTime;
@property (copy, nonatomic) NSString *firstByteTime;
@property (copy, nonatomic) NSString *packageTime;
@property (copy, nonatomic) NSString *writeTime;
@property (copy, nonatomic) NSString *totalTime;
@property (copy, nonatomic) NSString *beginTime;
@property (copy, nonatomic) NSString *endTime;

- (id)realTimeHeader;
- (id)modelIdentifer;
- (id)initWithTransactionMetrics:(id)a0;
- (id)ipWithString:(id)a0;
- (BOOL)isFail;
- (id)offline_serverIP;
- (id)offline_hostname;
- (id)offline_path;
- (id)offline_csid;
- (id)offline_connecttime;
- (id)offline_dnstime;
- (id)offline_ssltime;
- (id)offline_tcptime;
- (id)offline_writetime;
- (id)offline_readtime;
- (id)offline_totaltime;
- (id)offline_degrade;
- (id)offline_datazize;
- (id)offline_errorcode;
- (id)offline_errorsubcode;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
