@class HTSLiveCommon;

@interface HTSLiveBattleFrontRankMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
