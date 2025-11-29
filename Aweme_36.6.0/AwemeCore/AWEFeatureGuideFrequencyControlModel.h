@class NSString;

@interface AWEFeatureGuideFrequencyControlModel : AWEBaseApiModel

@property (nonatomic) long long itemID;
@property (nonatomic) long long showTimes;
@property (nonatomic) long long maxShow;
@property (nonatomic) long long lastShowTimestamp;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long status;
@property (nonatomic) long long intervalInSecond;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)shouldShow;

@end
