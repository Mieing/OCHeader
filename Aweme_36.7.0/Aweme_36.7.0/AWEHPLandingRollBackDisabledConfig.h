@class NSDictionary;

@interface AWEHPLandingRollBackDisabledConfig : AWEBaseBizConfigModel

@property (nonatomic) BOOL disableAll;
@property (copy, nonatomic) NSDictionary *disableChannelList;
@property (copy, nonatomic) NSDictionary *disableBizTypeList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
