@class NSString;

@interface DTFMonitorCommonData : NSObject {
    NSString *_token;
    long long _index;
}

@property (retain, nonatomic) NSString *serviceLevel;
@property (retain, nonatomic) NSString *beginTraceIDValue;
@property (retain, nonatomic) NSString *verifyTraceIDValue;
@property (retain, nonatomic) NSString *ocrTraceIDValue;
@property (retain, nonatomic) NSString *beginTraceIDKey;
@property (retain, nonatomic) NSString *verifyTraceIDKey;
@property (retain, nonatomic) NSString *ocrTraceIDKey;

+ (id)getInstance;

- (id)getBase64CommonMonitorData;
- (id)getCommonMonitorData;
- (long long)getIndex;
- (void).cxx_destruct;
- (void)resetValue;
- (id)init;
- (id)getToken;

@end
