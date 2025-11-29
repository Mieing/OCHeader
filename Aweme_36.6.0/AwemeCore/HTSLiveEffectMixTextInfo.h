@class NSString;

@interface HTSLiveEffectMixTextInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *textKey;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *fontColor;

+ (id)descriptor;

@end
