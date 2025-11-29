@class NSString, NSDictionary;

@interface IESLiveTraceEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *stepName;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *anchorId;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSDictionary *index;
@property (retain, nonatomic) NSDictionary *category;
@property (retain, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)traceEventWithCommonParamsWithDIContext:(id)a0;
+ (id)communityTraceEventWithName:(id)a0 moduleName:(id)a1 diContext:(id)a2;
+ (id)commentTraceEventWithName:(id)a0 diContext:(id)a1;
+ (id)publicScreenTraceEventWithName:(id)a0 diContext:(id)a1;
+ (id)danmakuTraceEventWithName:(id)a0 diContext:(id)a1;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
