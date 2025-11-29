@class NSString, NSMutableDictionary;

@interface WCFinderFlowEventReportInfo : NSObject

@property (nonatomic) unsigned long long bizId;
@property (copy, nonatomic) NSString *flowId;
@property (nonatomic) unsigned long long eventId;
@property (nonatomic) unsigned long long eventTime;
@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableDictionary *udfKV;

- (void).cxx_destruct;

@end
