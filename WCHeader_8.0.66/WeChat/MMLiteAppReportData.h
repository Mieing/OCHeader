@class NSString, NSDictionary;

@interface MMLiteAppReportData : NSObject

@property (readonly, nonatomic) long long logType;
@property (readonly, nonatomic) long long logAction;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) long long sequenceId;
@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) NSString *logStringValue;
@property (readonly, nonatomic) long long logUIntValue;
@property (readonly, nonatomic) long long localTimeStamps;
@property (readonly, nonatomic) NSDictionary *extInfo;
@property (readonly, nonatomic) NSString *expandDimension1;
@property (readonly, nonatomic) NSString *expandDimension2;
@property (readonly, nonatomic) NSString *expandDimension3;
@property (readonly, nonatomic) long long logIntValue;
@property (readonly, nonatomic) long long elapsedTimeSinceFirstLog;

+ (id)LiteAppReportDataWithLogType:(long long)a0 logAction:(long long)a1 sessionId:(id)a2 sequenceId:(long long)a3 appId:(id)a4 version:(id)a5 scene:(long long)a6 uri:(id)a7 logStringValue:(id)a8 logUIntValue:(long long)a9 localTimeStamps:(long long)a10 extInfo:(id)a11 expandDimension1:(id)a12 expandDimension2:(id)a13 expandDimension3:(id)a14 logIntValue:(long long)a15 elapsedTimeSinceFirstLog:(long long)a16;

- (id)initWithLogType:(long long)a0 logAction:(long long)a1 sessionId:(id)a2 sequenceId:(long long)a3 appId:(id)a4 version:(id)a5 scene:(long long)a6 uri:(id)a7 logStringValue:(id)a8 logUIntValue:(long long)a9 localTimeStamps:(long long)a10 extInfo:(id)a11 expandDimension1:(id)a12 expandDimension2:(id)a13 expandDimension3:(id)a14 logIntValue:(long long)a15 elapsedTimeSinceFirstLog:(long long)a16;
- (id)description;
- (void).cxx_destruct;

@end
