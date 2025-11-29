@class NSString, AWENearbyGuideFrequency;

@interface AWENearbySwitchButtonGuideRule : AWEBaseApiModel

@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long slideVideoCnt;
@property (retain, nonatomic) AWENearbyGuideFrequency *frequency;
@property (nonatomic) long long maxGuideTimes;
@property (retain, nonatomic) NSString *fullBtnName;
@property (retain, nonatomic) NSString *dualBtnName;
@property (retain, nonatomic) NSString *confirmText;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
