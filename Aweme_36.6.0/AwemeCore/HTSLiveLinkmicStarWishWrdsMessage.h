@class HTSLiveStarwishStageToast, HTSLiveLinkmicStarWishInfo;

@interface HTSLiveLinkmicStarWishWrdsMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicStarWishInfo *starwishInfo;
@property (nonatomic) BOOL hasStarwishInfo;
@property (retain, nonatomic) HTSLiveStarwishStageToast *stageToast;
@property (nonatomic) BOOL hasStageToast;
@property (nonatomic) int msgType;

+ (id)descriptor;

@end
