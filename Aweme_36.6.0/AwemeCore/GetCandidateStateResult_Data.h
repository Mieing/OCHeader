@class NSString;

@interface GetCandidateStateResult_Data : IESLivePBBaseMessage

@property (nonatomic) int candidateState;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
