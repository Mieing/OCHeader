@class NSDictionary, AWEHPSlideGestureActionVerifyConfig, AWEHPSlideGestureNonRespondVerifyConfig;

@interface AWEHPSlideMonitorConfig : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *version;
@property (retain, nonatomic) AWEHPSlideGestureNonRespondVerifyConfig *nonRespondVerifyConfig;
@property (retain, nonatomic) AWEHPSlideGestureActionVerifyConfig *actionVerifyConfig;
@property (copy, nonatomic) NSDictionary *whiteList;
@property (nonatomic) BOOL closeTabVisibleLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
