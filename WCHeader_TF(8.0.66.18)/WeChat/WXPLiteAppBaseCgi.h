@class NSString, NSData;

@interface WXPLiteAppBaseCgi : MMKCgi

@property (nonatomic) int cgiId;
@property (retain, nonatomic) NSString *cgiUrl;
@property (nonatomic) int channelType;
@property (nonatomic) int timeout;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) NSData *requestData;
@property (nonatomic) BOOL needNotify;
@property (retain, nonatomic) NSString *routeInfo;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithConfig:(id)a0 data:(id)a1 error:(id *)a2;
- (int)getCgiId;
- (id)getCgiUrl;
- (int)getChannelType;
- (int)getTimeout;
- (int)getRetryCount;
- (id)getRequestData;
- (BOOL)getNeedNotify;
- (id)getRouteInfo;
- (long long)getNewDNSBusinessType;
- (void)onResp:(int)a0 responseData:(id)a1 extraInfo:(id)a2;
- (BOOL)needMarkPayNewDnsTag;
- (void).cxx_destruct;

@end
