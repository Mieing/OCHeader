@class HTSLiveAIPublicScreenContainer;

@interface HTSLiveFeaturedPublicScreenConf : IESLivePBBaseMessage

@property (nonatomic) long long status;
@property (nonatomic) long long mode;
@property (retain, nonatomic) HTSLiveAIPublicScreenContainer *aiContainer;
@property (nonatomic) BOOL hasAiContainer;

+ (id)descriptor;

@end
