@class NSString, NSDictionary;

@interface BDScreenCastLogParamsModel : NSObject

@property (nonatomic) BOOL enableLiveTraceLog;
@property (copy, nonatomic) NSString *traceEventName;
@property (retain, nonatomic) NSDictionary *traceParams;

- (void).cxx_destruct;

@end
