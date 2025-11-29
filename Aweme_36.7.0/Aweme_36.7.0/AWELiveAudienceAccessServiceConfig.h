@class AWELiveAudienceAccessServiceStyleConfig, AWELiveAudienceAccessServiceComponentConfig, AWELiveAudienceAccessServicePlayerConfig, AWELiveAudienceAccessServiceCoreConfig, AWELiveAudienceAccessServiceInfraConfig;

@interface AWELiveAudienceAccessServiceConfig : NSObject

@property (retain, nonatomic) AWELiveAudienceAccessServiceInfraConfig *infraConfig;
@property (retain, nonatomic) AWELiveAudienceAccessServicePlayerConfig *playerConfig;
@property (retain, nonatomic) AWELiveAudienceAccessServiceStyleConfig *styleConfig;
@property (retain, nonatomic) AWELiveAudienceAccessServiceCoreConfig *coreConfig;
@property (retain, nonatomic) AWELiveAudienceAccessServiceComponentConfig *componentConfig;

- (void).cxx_destruct;

@end
