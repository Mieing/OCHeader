@class HTSLiveLinkmicThemedCompetitionBannerMessageForPC_BannerContent;

@interface HTSLiveLinkmicThemedCompetitionBannerMessageForPC : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionBannerMessageForPC_BannerContent *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) int refreshType;

+ (id)descriptor;

@end
