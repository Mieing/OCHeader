@class NSMutableArray;

@interface GetSelectedChallengeListResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *challengeListArray;
@property (readonly, nonatomic) unsigned long long challengeListArray_Count;

+ (id)descriptor;

@end
