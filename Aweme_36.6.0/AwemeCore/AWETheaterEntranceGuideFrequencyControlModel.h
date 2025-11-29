@interface AWETheaterEntranceGuideFrequencyControlModel : AWEBaseApiModel

@property (nonatomic) long long dayInterval;
@property (nonatomic) long long maxCountInDayInterval;
@property (nonatomic) long long maxCountInInstall;

+ (id)JSONKeyPathsByPropertyKey;

@end
