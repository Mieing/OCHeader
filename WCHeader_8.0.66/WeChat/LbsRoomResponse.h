@class NSString, BaseResponse;

@interface LbsRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *roomNickName;

+ (void)initialize;

@end
