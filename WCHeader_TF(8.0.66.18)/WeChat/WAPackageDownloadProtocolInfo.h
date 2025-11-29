@class NSString, NSDictionary;

@interface WAPackageDownloadProtocolInfo : NSObject

@property (nonatomic) unsigned long long protocol;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) BOOL useHttp2;
@property (nonatomic) BOOL useQuic;
@property (nonatomic) unsigned long long taskStartTime;
@property (nonatomic) unsigned long long redirectStartTime;
@property (nonatomic) unsigned long long redirectEndTime;
@property (nonatomic) unsigned long long fetchStartTime;
@property (nonatomic) unsigned long long domainLookUpStartTime;
@property (nonatomic) unsigned long long domainLookUpEndTime;
@property (nonatomic) unsigned long long connectStartTime;
@property (nonatomic) unsigned long long connectEndTime;
@property (nonatomic) unsigned long long secureConnectionStartTime;
@property (nonatomic) unsigned long long secureConnectionEndTime;
@property (nonatomic) unsigned long long requestStartTime;
@property (nonatomic) unsigned long long requestEndTime;
@property (nonatomic) unsigned long long responseStartTime;
@property (nonatomic) unsigned long long responseEndTime;
@property (copy, nonatomic) NSString *protocolStr;
@property (nonatomic) int rtt;
@property (nonatomic) int statusCode;
@property (nonatomic) int networkEstimateType;
@property (nonatomic) int httpRttEstimate;
@property (nonatomic) int transportRttEstimate;
@property (nonatomic) int downstreamThroughputKbpsEstimate;
@property (nonatomic) int throughputKbps;
@property (copy, nonatomic) NSString *peerIp;
@property (nonatomic) int peerPort;
@property (nonatomic) BOOL socketReused;
@property (nonatomic) long long sentBytesCount;
@property (nonatomic) long long receivedBytesCount;
@property (nonatomic) unsigned int dnsType;
@property (retain, nonatomic) NSDictionary *headerDic;
@property (nonatomic) BOOL useDownloadResumption;

- (id)initWithProtocol:(unsigned long long)a0;
- (void).cxx_destruct;

@end
