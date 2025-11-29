@class NSString, NSMutableArray;

@interface GetGiftVotesResponse_Vote : IESLivePBBaseMessage

@property (readonly, nonatomic) long long voteID;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSString *voteId;
@property (retain, nonatomic) NSMutableArray *resultsArray;
@property (readonly, nonatomic) unsigned long long resultsArray_Count;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long currentTime;
@property (nonatomic) long long status;
@property (nonatomic) long long voteType;
@property (nonatomic) long long userCount;

+ (id)descriptor;

- (id)initWithMessage:(id)a0;

@end
