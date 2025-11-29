@class NSString, BaseResponse;

@interface GameCreateChatRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *createChatRoomUrl;
@property (nonatomic) int errCode;

+ (void)initialize;

@end
