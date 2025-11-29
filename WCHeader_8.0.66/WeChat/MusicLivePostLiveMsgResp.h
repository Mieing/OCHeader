@class MusicLiveMsgPack, BaseResponse;

@interface MusicLivePostLiveMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MusicLiveMsgPack *msg;

+ (void)initialize;

@end
