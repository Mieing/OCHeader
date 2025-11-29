@class NSString, NSArray, AWETopicShootPopupFrequencyModel, NSNumber;

@interface AWETopicShootPopupModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *popupName;
@property (copy, nonatomic) NSString *lightBanner;
@property (copy, nonatomic) NSString *darkBanner;
@property (retain, nonatomic) NSNumber *bannerRatio;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *textExtra;
@property (retain, nonatomic) AWETopicShootPopupFrequencyModel *frequency;

+ (id)popupNameJSONTransformer;
+ (id)textExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
