@class BaseRequest, NSString;

@interface RevokeChatRoomAnnouncementReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *announcementId;
@property (retain, nonatomic) NSString *clientMsgId;

+ (void)initialize;

@end
