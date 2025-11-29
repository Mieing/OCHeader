@class NSString;

@interface InteractChallenge : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *challengeIcon;
@property (copy, nonatomic) NSString *challengeDesc;
@property (nonatomic) long long challengingCount;
@property (nonatomic) int challengeStatus;
@property (nonatomic) long long heatValue;
@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) int interactionPluginType;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) int anchorChallengeStatus;

+ (id)descriptor;

@end
