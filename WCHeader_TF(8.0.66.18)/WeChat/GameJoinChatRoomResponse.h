@class NSString, BaseResponse;

@interface GameJoinChatRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *joinChatRoomUrl;
@property (nonatomic) int errCode;

+ (void)initialize;

@end
