@class ChatroomMsgPack, NSString, SendChatroomMsgRequest, GameChatRoomContact, GCImageMsgWrapper;

@interface GCChatRoomMessage : NSObject

@property (nonatomic) BOOL isLocalMessage;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic) unsigned long long messageSubType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) GameChatRoomContact *userContactInfo;
@property (retain, nonatomic) NSString *userChatRoomNickName;
@property (retain, nonatomic) NSString *cliMsgId;
@property (retain, nonatomic) ChatroomMsgPack *msgPack;
@property (retain, nonatomic) SendChatroomMsgRequest *sendMsgRequest;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL delaySend;
@property (retain, nonatomic) GCImageMsgWrapper *imgMsgWrapper;

- (void).cxx_destruct;

@end
