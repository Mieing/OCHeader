@class NSString, AWEDiversionTimerConfigModel;

@interface AWEDiversionTimerModel : AWEBaseApiModel

@property (nonatomic) long long totalTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) AWEDiversionTimerConfigModel *timerConfig;
@property (nonatomic) BOOL finish;
@property (copy, nonatomic) NSString *toast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
