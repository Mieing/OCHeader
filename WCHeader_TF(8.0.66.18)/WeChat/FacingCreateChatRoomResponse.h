@class NSString, NSMutableArray, BaseResponse;

@interface FacingCreateChatRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) NSString *chatRoomName;

+ (void)initialize;

@end
