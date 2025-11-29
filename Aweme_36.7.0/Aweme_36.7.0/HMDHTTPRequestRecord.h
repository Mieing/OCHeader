@class NSString, NSURLResponse, NSData, NSError, NSURLRequest, NSArray;

@interface HMDHTTPRequestRecord : NSObject <NSCopying>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLResponse *response;
@property (copy, nonatomic) NSData *responseData;
@property (copy, nonatomic) NSString *connetType;
@property (copy, nonatomic) NSString *logType;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endtime;
@property (nonatomic) long long requestSendTime;
@property (nonatomic) long long responseRecTime;
@property (nonatomic) unsigned long long dataLength;
@property (nonatomic) BOOL inWhiteList;
@property (nonatomic) long long dnsTime;
@property (nonatomic) long long connectTime;
@property (nonatomic) long long tcpTime;
@property (nonatomic) long long sslTime;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long waitTime;
@property (nonatomic) long long receiveTime;
@property (nonatomic) unsigned long long isCached;
@property (nonatomic) unsigned long long isFromProxy;
@property (nonatomic) unsigned long long isSocketReused;
@property (nonatomic) long long redirectCount;
@property (nonatomic) BOOL sessionConnectReuse;
@property (copy, nonatomic) NSString *remoteIP;
@property (copy, nonatomic) NSString *remotePort;
@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *requestLog;
@property (copy, nonatomic) NSArray *redirectList;
@property (nonatomic) long long isForeground;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSArray *hit_rule_tags;
@property (copy, nonatomic) NSString *sdkAid;
@property (copy, nonatomic) NSString *injectTracelog;
@property (copy, nonatomic) NSString *netLogType;
@property (copy, nonatomic) NSString *baseApiAll;
@property (nonatomic) unsigned long long enableUpload;
@property (copy, nonatomic) NSString *requestScene;
@property (nonatomic) long long requestBodyStreamLength;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
