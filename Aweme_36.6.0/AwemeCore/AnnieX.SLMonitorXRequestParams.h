@class NSString;

@interface AnnieX.SLMonitorXRequestParams : NSObject {
    void /* unknown type, empty encoding */ __rts_method;
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_clientCode;
    void /* unknown type, empty encoding */ __rts_clientMsg;
    void /* unknown type, empty encoding */ __rts_clientRawMsg;
    void /* unknown type, empty encoding */ __rts_statusCode;
    void /* unknown type, empty encoding */ __rts_duration;
    void /* unknown type, empty encoding */ __rts_tracerId;
    void /* unknown type, empty encoding */ __rts_logId;
    void /* unknown type, empty encoding */ __rts_timestamp;
    void /* unknown type, empty encoding */ __rts_xRequestSuccess;
}

@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) long long clientCode;
@property (nonatomic, copy) NSString *clientMsg;
@property (nonatomic, copy) NSString *clientRawMsg;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long duration;
@property (nonatomic, copy) NSString *tracerId;
@property (nonatomic, copy) NSString *logId;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL xRequestSuccess;

- (void).cxx_destruct;
- (id)init;

@end
