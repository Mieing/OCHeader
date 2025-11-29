@class HTSLiveCommon;

@interface HTSLiveDouplusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long promotion;

+ (id)descriptor;

@end
