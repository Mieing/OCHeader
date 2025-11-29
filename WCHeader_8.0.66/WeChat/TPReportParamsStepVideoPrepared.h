@class NSString;

@interface TPReportParamsStepVideoPrepared : TPReportParamsStep

@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long urlindex;
@property (nonatomic) long long fileopenedtime;
@property (nonatomic) long long firstpacketreadtime;

- (id)init;
- (void).cxx_destruct;

@end
