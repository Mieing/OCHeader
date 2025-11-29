@class NSString;

@interface AWEMusicRiskInfoModel : MTLModel

@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) long long riskResult;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
