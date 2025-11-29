@class NSString;

@interface HTSLiveLinkmicSelfDisciplineLikeContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int source;

+ (id)descriptor;

@end
