@class HTSLiveStarwishStageToast, HTSLiveLinkmicStarWishInfo;

@interface HTSLiveLinkmicStarWishUpdateContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicStarWishInfo *starwishInfo;
@property (nonatomic) BOOL hasStarwishInfo;
@property (retain, nonatomic) HTSLiveStarwishStageToast *stageToast;
@property (nonatomic) BOOL hasStageToast;

+ (id)descriptor;

@end
