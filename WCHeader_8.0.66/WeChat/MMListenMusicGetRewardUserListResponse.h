@class NSData, NSMutableArray, BaseResponse;

@interface MMListenMusicGetRewardUserListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *rewardUserList;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
