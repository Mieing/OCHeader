@class InteractChallenge;

@interface ChallengeRankResp : IESLivePBBaseMessage

@property (nonatomic) BOOL isChallengeResource;
@property (retain, nonatomic) InteractChallenge *challengeInfo;
@property (nonatomic) BOOL hasChallengeInfo;
@property (retain, nonatomic) InteractChallenge *anchorChallengingInfo;
@property (nonatomic) BOOL hasAnchorChallengingInfo;

+ (id)descriptor;

@end
