@class AWETopicBasicShootButtonConfigModel, NSString, AWETopicBubbleShootButtonConfigModel, AWETopicDualShootButtonConfigModel;

@interface AWETopicShootButtonStyleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *styleName;
@property (retain, nonatomic) AWETopicBasicShootButtonConfigModel *basicConfig;
@property (retain, nonatomic) AWETopicBubbleShootButtonConfigModel *bubbleConfig;
@property (retain, nonatomic) AWETopicDualShootButtonConfigModel *dualConfig;

+ (id)styleNameJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
