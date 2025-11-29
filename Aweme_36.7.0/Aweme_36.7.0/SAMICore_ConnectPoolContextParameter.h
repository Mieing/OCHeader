@class NSString;

@interface SAMICore_ConnectPoolContextParameter : NSObject

@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) long long tokenType;
@property (nonatomic) int timeout;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) int protocolType;
@property (nonatomic) int clientCnt;
@property (nonatomic) int clientConnectTimeout;
@property (nonatomic) int clientRetryPingPongTimeout;

- (void)dealloc;

@end
