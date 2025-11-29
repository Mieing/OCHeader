@class OpenIMChatRoomMemberData, BaseResponse;

@interface GetOpenIMChatRoomMemberDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int svrMemberVersion;
@property (retain, nonatomic) OpenIMChatRoomMemberData *memberData;

+ (void)initialize;

@end
