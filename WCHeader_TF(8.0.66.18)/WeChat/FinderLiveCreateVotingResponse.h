@class FinderLiveVotingInfo, BaseResponse;

@interface FinderLiveCreateVotingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveVotingInfo *votingInfo;

+ (void)initialize;

@end
