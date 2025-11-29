@class NSString;

@interface AWEAdHotSpotLynxCardModel : AWEBaseApiModel

@property (nonatomic) unsigned long long feedCardType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *feData;
@property (copy, nonatomic) NSString *settingKey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
