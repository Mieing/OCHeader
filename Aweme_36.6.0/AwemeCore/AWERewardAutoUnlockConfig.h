@class AWERewardAutoUnlockBtnConfig;

@interface AWERewardAutoUnlockConfig : AWEBaseApiModel

@property (retain, nonatomic) AWERewardAutoUnlockBtnConfig *currentUnlockConfig;
@property (retain, nonatomic) AWERewardAutoUnlockBtnConfig *nextUnlockConfig;

+ (id)currentUnlockConfigJSONTransformer;
+ (id)nextUnlockConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
