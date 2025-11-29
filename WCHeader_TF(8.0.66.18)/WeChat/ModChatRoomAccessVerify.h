@class NSString;

@interface ModChatRoomAccessVerify : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned int value;
@property (nonatomic) unsigned int qrcodeAccessType;

+ (void)initialize;

@end
