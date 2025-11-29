@class NSString;

@interface GetAssociateChatRoomManageInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) int scene;

+ (void)initialize;

@end
