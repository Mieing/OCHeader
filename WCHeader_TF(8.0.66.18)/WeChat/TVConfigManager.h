@class NSString, NSURLConnection;

@interface TVConfigManager : NSObject <NSURLConnectionDataDelegate> {
    NSString *bakPrefix;
    NSString *otype;
    NSString *platform;
    NSString *host;
    NSString *port;
    NSString *cgi;
    NSString *player_channel_id;
    NSString *version;
    NSString *versionCode;
    NSString *ipflag;
    NSString *guid;
    int MAXRetryTimes;
    double timeout;
    NSURLConnection *configConnection;
    NSString *receiveData;
    BOOL useHTTPS;
    int retryTime;
    BOOL isRequested;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)SynRequestForConfig;
- (BOOL)SendHTTPSRequestToHost:(id)a0 withTimeOut:(double)a1;
- (void)SendSynRequestToHost:(id)a0 withTimeOut:(double)a1;
- (id)MakeGetServerConfigUrl;
- (id)MakeBKGetServerConfigUrl;
- (id)GetTVProxyConfig;
- (id)GetTVProxyVersion;
- (id)GetTVProxyVersionCode;
- (id)GetTVProxyConfigVersion;
- (void)SaveConfig:(id)a0;
- (void)cancelAttainConfig;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;

@end
