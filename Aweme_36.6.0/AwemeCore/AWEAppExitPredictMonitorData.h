@class NSString, NSDictionary;

@interface AWEAppExitPredictMonitorData : NSObject <NSCoding>

@property (nonatomic) long long waitCount;
@property (copy, nonatomic) NSString *runKey;
@property (copy, nonatomic) NSString *s_result;
@property (copy, nonatomic) NSString *ss_result;
@property (copy, nonatomic) NSDictionary *extData;

- (id)getReportData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
