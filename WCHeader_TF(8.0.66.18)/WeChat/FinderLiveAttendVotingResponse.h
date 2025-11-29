@class FinderLiveVotingInfo, BaseResponse;

@interface FinderLiveAttendVotingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveVotingInfo *votingInfo;
@property (nonatomic) unsigned int statusFlag;

+ (void)initialize;

@end
