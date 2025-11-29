@class NSArray, NSString, AWENearbyGuideFrequency;

@interface AWENearbyGuideModel : AWEBaseApiModel

@property (nonatomic) unsigned long long guideType;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *bannerTitle;
@property (retain, nonatomic) NSString *button;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *bannerSchema;
@property (retain, nonatomic) NSString *lynxUrl;
@property (nonatomic) long long showTime;
@property (retain, nonatomic) AWENearbyGuideFrequency *frequency;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;
- (id)description;

@end
