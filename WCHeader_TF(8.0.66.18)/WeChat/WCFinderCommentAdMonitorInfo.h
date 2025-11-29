@class NSString;

@interface WCFinderCommentAdMonitorInfo : NSObject

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long aid;
@property (nonatomic) unsigned long long netType;
@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *mediaUrl;
@property (nonatomic) BOOL hitPreload;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) BOOL isFirstExpose;
@property (nonatomic) unsigned long long cgiCostTime;
@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) unsigned long long userPerceivedTime;
@property (nonatomic) unsigned long long downloadTime;
@property (nonatomic) long long errorCode;
@property (nonatomic) unsigned long long imageShowTime;
@property (nonatomic) unsigned long long firstFrameTime;
@property (nonatomic) unsigned long long waittingCount;
@property (nonatomic) unsigned long long totalWaittingTime;
@property (copy, nonatomic) NSString *waitingDetails;
@property (copy, nonatomic) NSString *svrIp;
@property (nonatomic) unsigned long long svrPort;
@property (nonatomic) long long cdnErrCode;
@property (nonatomic) long long playerErrCode;
@property (nonatomic) unsigned long long preloadPercent;
@property (nonatomic) unsigned long long connectTime;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned long long decodeTime;
@property (nonatomic) unsigned long long renderTime;

- (void).cxx_destruct;

@end
