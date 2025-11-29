@class AWEIMConsecutiveChatBasicModel, AWEIMConsecutiveChatAnimationModel;

@interface AWEIMConsecutiveChatFrequencyModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMConsecutiveChatAnimationModel *animationModel;
@property (retain, nonatomic) AWEIMConsecutiveChatBasicModel *basicModel;

+ (id)animationModelJSONTransformer;
+ (id)basicModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
