@class NSString, NSNumber;

@interface AFDRecommendPostscriptGuideSettingConfig : AWEBaseSettingsModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *maxShowCount;
@property (retain, nonatomic) NSNumber *maxShowCountPerDay;
@property (retain, nonatomic) NSNumber *exitDayAfterShow;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *hintText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
