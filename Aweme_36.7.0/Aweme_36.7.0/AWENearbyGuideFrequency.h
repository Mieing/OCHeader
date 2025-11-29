@class NSString;

@interface AWENearbyGuideFrequency : AWEBaseApiModel

@property (nonatomic) long long dayRange;
@property (nonatomic) long long guideTimes;
@property (nonatomic) long long maxGuideTimes;
@property (nonatomic) long long intervalDay;
@property (retain, nonatomic) NSString *impressionType;
@property (retain, nonatomic) NSString *objectIndex;
@property (retain, nonatomic) NSString *objectType;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
