@class NSString, NSMutableArray;

@interface GetGiftVotesResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long serverTime;
@property (retain, nonatomic) NSMutableArray *votesArray;
@property (readonly, nonatomic) unsigned long long votesArray_Count;
@property (nonatomic) long long voteType;
@property (copy, nonatomic) NSString *notice;

+ (id)descriptor;

@end
