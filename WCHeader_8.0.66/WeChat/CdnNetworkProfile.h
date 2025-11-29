@class NSString, NSMutableArray;

@interface CdnNetworkProfile : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *lastServerIp;
@property (retain, nonatomic) NSString *lastClientIp;
@property (nonatomic) BOOL isCrossNetwork;
@property (nonatomic) unsigned int avgSpeed;
@property (nonatomic) unsigned int avgConnCost;
@property (nonatomic) unsigned int firstConnCost;
@property (nonatomic) unsigned int connTimes;
@property (nonatomic) unsigned int avgRtt;
@property (nonatomic) unsigned int serverFallbackCount;
@property (nonatomic) int httpStatusCode;
@property (retain, nonatomic) NSString *httpResponseHeader;
@property (retain, nonatomic) NSString *usedUrl;
@property (retain, nonatomic) NSString *xerrno;
@property (nonatomic) BOOL isPrivateProtocol;
@property (retain, nonatomic) NSMutableArray *serverIps;
@property (nonatomic) unsigned int lastServerPort;
@property (nonatomic) unsigned int lastNetworkType;

+ (void)initialize;

@end
