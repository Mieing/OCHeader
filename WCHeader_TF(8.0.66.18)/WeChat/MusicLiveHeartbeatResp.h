@class NSData, NSMutableArray, BaseResponse;

@interface MusicLiveHeartbeatResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *cookie;
@property (retain, nonatomic) NSMutableArray *msgList;
@property (nonatomic) unsigned int onlineMemberCount;

+ (void)initialize;

@end
