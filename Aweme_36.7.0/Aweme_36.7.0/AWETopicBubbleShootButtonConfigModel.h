@class NSString, AWETopicBasicShootButtonConfigModel;

@interface AWETopicBubbleShootButtonConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) AWETopicBasicShootButtonConfigModel *basicStyleConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
