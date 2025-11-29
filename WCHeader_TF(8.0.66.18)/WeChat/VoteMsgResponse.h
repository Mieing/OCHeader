@class VoteInfo, BaseResponse, NSString, JumpInfo;

@interface VoteMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) VoteInfo *voteInfo;
@property (retain, nonatomic) JumpInfo *educationJumpInfo;
@property (retain, nonatomic) NSString *reportExtInfo;

+ (void)initialize;

@end
