@class FriendChatBoxInfo, BaseResponse;

@interface FinderLiveGetFriendChatInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FriendChatBoxInfo *boxInfo;

+ (void)initialize;

@end
