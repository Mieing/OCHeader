@class NSString;

@interface BDPValidSchemaOnlineReponseData : BDPValidSchemaCommonReponseData

@property (nonatomic) long long trace_result;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;

@end
