@class RoomBindAppList, NSString, SKBuiltinBuffer_t, RoomTools, BaseResponse;

@interface GetChatRoomInfoDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *announcement;
@property (nonatomic) unsigned int chatRoomInfoVersion;
@property (retain, nonatomic) NSString *announcementEditor;
@property (nonatomic) unsigned int announcementPublishTime;
@property (nonatomic) unsigned int chatRoomStatus;
@property (nonatomic) unsigned long long chatRoomBusinessType;
@property (retain, nonatomic) RoomTools *roomTools;
@property (retain, nonatomic) NSString *associateOpenImroomName;
@property (retain, nonatomic) RoomBindAppList *roomBindAppList;
@property (nonatomic) unsigned int spamStatus;
@property (retain, nonatomic) NSString *xmlAnnouncement;
@property (retain, nonatomic) SKBuiltinBuffer_t *finderInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *topMsgInfo;

+ (void)initialize;

@end
