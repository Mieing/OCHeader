@interface HTSLivePersonalizedDisplayInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isPersonalized;
@property (nonatomic) long long foldType;

+ (id)descriptor;

@end
