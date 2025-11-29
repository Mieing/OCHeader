@class NSString, AtInfo, ChatroomRecInfo, AbstractInfo;

@interface MyChatroomInfo : WXPBGeneratedMessage

@property (retain, nonatomic) ChatroomRecInfo *chatroomInfo;
@property (retain, nonatomic) AtInfo *atInfo;
@property (nonatomic) unsigned long long unreadMsgCount;
@property (retain, nonatomic) AbstractInfo *abstractInfo;
@property (retain, nonatomic) NSString *lastMsgDesc;

+ (void)initialize;

@end
