@class BaseRequest, NSString, NSMutableArray;

@interface SetChatRoomAnnouncementRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *announcement;
@property (nonatomic) unsigned int setAnnouncementFlag;
@property (retain, nonatomic) NSString *xmlAnnouncement;
@property (nonatomic) unsigned int resourceCount;
@property (retain, nonatomic) NSMutableArray *resources;
@property (nonatomic) unsigned int pureText;

+ (void)initialize;

@end
