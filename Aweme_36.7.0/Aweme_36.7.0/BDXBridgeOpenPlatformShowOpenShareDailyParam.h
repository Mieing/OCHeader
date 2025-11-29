@class NSString, NSNumber;

@interface BDXBridgeOpenPlatformShowOpenShareDailyParam : BDXBridgeModel

@property (copy, nonatomic) NSString *shareDailyH5Path;
@property (copy, nonatomic) NSString *shareDailyBGUrl;
@property (copy, nonatomic) NSString *shareDailyBGBaseColor;
@property (copy, nonatomic) NSString *shareDailyBGComplementaryColor;
@property (retain, nonatomic) NSNumber *dailyScale;
@property (retain, nonatomic) NSNumber *dailyContentType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
