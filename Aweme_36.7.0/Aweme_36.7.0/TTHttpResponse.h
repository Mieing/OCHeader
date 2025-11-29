@class NSDate, NSString, NSURL, TTHttpResponseAdditionalTimeInfo, NSMutableDictionary, NSDictionary, TTHttpResponseTimingInfo, TTCaseInsenstiveDictionary, NSNumber, BDTuringCallbackInfo;

@interface TTHttpResponse : NSObject <BDTGHttpResponse, TMNetworkAspectResponseProtocol, NSCopying>

@property (readonly, copy, nonatomic) NSString *logId;
@property (readonly, copy, nonatomic) NSDictionary *allHeaderFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ttaccount_sessionId;
@property (readonly, copy, nonatomic) NSString *ttaccount_logid;
@property (readonly, copy, nonatomic) NSString *ttaccount_token;
@property (readonly, copy, nonatomic) NSString *ttaccount_ip_match_result;
@property (copy, nonatomic) NSDate *awemeFeedStartSerialization;
@property (copy, nonatomic) NSDate *awemeFeedStartSerialization_teen;
@property (readonly) NSNumber *iesec_contentLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long statusCode;
@property (copy) TTCaseInsenstiveDictionary *allHeaderFields;
@property (retain) NSURL *URL;
@property (retain) NSURL *finalURL;
@property (copy) NSString *MIMEType;
@property BOOL isInternalRedirect;
@property (retain) TTHttpResponseTimingInfo *timinginfo;
@property (retain) BDTuringCallbackInfo *turingCallbackinfo;
@property (retain) NSMutableDictionary *filterObjectsTimeInfo;
@property (retain) NSMutableDictionary *serializerTimeInfo;
@property (retain) TTHttpResponseAdditionalTimeInfo *additionalTimeInfo;
@property (retain) NSMutableDictionary *extraBizInfo;
@property (retain) NSMutableDictionary *responseInfo;
@property BOOL isCallbackExecutedOnMainThread;
@property (retain) NSMutableDictionary *concurrentRequestLogInfo;

- (void)tm_net_setRequest:(id)a0;
- (void)tm_net_setResponseData:(id)a0;
- (void)tm_net_setResponseError:(id)a0;
- (id)tm_net_aspectType;
- (id)tm_net_url;
- (id)tm_net_allHTTPHeaderFields;
- (id)tm_net_valueForHTTPHeaderField:(id)a0;
- (id)tm_net_passThroughInfo;
- (void)tm_net_setPassThroughInfo:(id)a0;
- (void)tm_net_setPassThroughInfoValue:(id)a0 forKey:(id)a1;
- (id)tm_net_request;
- (long long)tm_net_statusCode;
- (id)tm_net_MIMEType;
- (id)tm_net_responseData;
- (id)tm_net_responseError;
- (void)tm_net_setMutableResponseData:(id *)a0;
- (void)tm_net_setMutableResponseError:(id *)a0;
- (id)logidHeaderKey;
- (id)sessionIdHeaderKey;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
