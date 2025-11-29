@class NSDate, NSString, NSDictionary, NSURL, NSMutableDictionary, NSData, TTAuthCredentials;

@interface TTHttpRequest : NSObject <BDTGHttpRequest, TMNetworkAspectRequestProtocol, NSCopying>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ttaccount_deviceId;
@property (readonly, copy, nonatomic) NSString *ttaccount_token;
@property (nonatomic) BOOL forceIgnore_X_TT_TOKEN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableDictionary *serializerTimeInfo;
@property (retain) NSMutableDictionary *filterObjectsTimeInfo;
@property (retain) NSMutableDictionary *requestInfo;
@property (nonatomic) unsigned long long retryTimes;
@property (retain) NSMutableDictionary *retryInfo;
@property (copy, nonatomic) NSString *lastRetryUrl;
@property (nonatomic) unsigned long long retryHostPathCount;
@property (copy) NSDictionary *webviewInfo;
@property BOOL isSerializedOnMainThread;
@property (copy) NSString *HTTPMethod;
@property (copy) NSURL *URL;
@property double timeoutInterval;
@property (copy) NSData *HTTPBody;
@property (copy, nonatomic) NSString *bodyCompressType;
@property (copy) NSString *uploadFilePath;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property BOOL followRedirect;
@property (nonatomic) BOOL shouldReportLog;
@property (nonatomic) BOOL bypassApiReport;
@property (nonatomic) BOOL bypassProxy;
@property (retain, nonatomic) TTAuthCredentials *authCredentials;
@property (retain, nonatomic) NSDate *startBizTime;
@property unsigned long long taskId;
@property (nonatomic) SEL entrySelector;
@property (nonatomic) BOOL delayedInBackground;
@property (retain, nonatomic) NSDate *delayedInBackgroundStartTime;
@property (retain, nonatomic) NSDate *delayedInBackgroundEndTime;
@property (nonatomic) int foregroundRequestCount;
@property (retain, nonatomic) NSDate *modifyTaskBlockStartTime;
@property (retain, nonatomic) NSDate *modifyTaskBlockEndTime;

- (id)tm_net_aspectType;
- (id)tm_net_url;
- (id)tm_net_allHTTPHeaderFields;
- (id)tm_net_valueForHTTPHeaderField:(id)a0;
- (id)tm_net_passThroughInfo;
- (void)tm_net_setPassThroughInfo:(id)a0;
- (void)tm_net_setPassThroughInfoValue:(id)a0 forKey:(id)a1;
- (id)tm_net_HTTPBody;
- (id)tm_net_HTTPMethod;
- (void)tm_net_dropRequest;
- (void)tm_net_setHTTPBody:(id)a0;
- (void)tm_net_setURL:(id)a0;
- (void)tm_net_setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
