@class NSString;

@interface HTSLiveEffectTextInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *placeholderKey;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *fontColor;

+ (id)descriptor;

@end
