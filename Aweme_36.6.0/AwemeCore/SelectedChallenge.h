@class NSString;

@interface SelectedChallenge : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;

+ (id)descriptor;

@end
