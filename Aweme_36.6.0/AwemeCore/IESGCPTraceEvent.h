@class NSString, NSDictionary;

@interface IESGCPTraceEvent : NSObject

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

- (void).cxx_destruct;

@end
