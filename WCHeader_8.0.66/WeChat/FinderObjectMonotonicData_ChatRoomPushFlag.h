@class NSString, NSMutableArray, FinderObjectVersionData;

@interface FinderObjectMonotonicData_ChatRoomPushFlag : WXPBGeneratedMessage

@property (nonatomic) unsigned int chatroomPushFlag;
@property (nonatomic) unsigned int disableChatroomPushIcon;
@property (retain, nonatomic) NSMutableArray *chatroomPushList;
@property (retain, nonatomic) NSString *disableChatroomPushWording;
@property (retain, nonatomic) FinderObjectVersionData *versionData;

+ (void)initialize;

@end
