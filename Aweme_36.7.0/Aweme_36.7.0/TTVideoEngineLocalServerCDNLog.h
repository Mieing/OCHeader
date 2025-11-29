@class NSString;

@interface TTVideoEngineLocalServerCDNLog : NSObject

@property (copy, nonatomic) NSString *fileKey;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *serverIp;
@property (copy, nonatomic) NSString *xCache;
@property (copy, nonatomic) NSString *xMCache;
@property (nonatomic) long long contentLength;
@property (nonatomic) long long reqStartT;
@property (nonatomic) long long reqEndT;

- (void).cxx_destruct;

@end
