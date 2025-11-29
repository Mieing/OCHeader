@class NSNumber;

@interface AWETeenScreenTimeRecordModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *totalDuration;
@property (nonatomic) long long weekdayTime;
@property (nonatomic) long long weekendTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
