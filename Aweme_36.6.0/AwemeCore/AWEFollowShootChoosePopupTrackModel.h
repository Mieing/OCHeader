@class NSString, NSDictionary;

@interface AWEFollowShootChoosePopupTrackModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *trackEvent;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
