@class NSString, NSMutableArray, ChatBotVoIPRoomInfoPB_ExtInfo;

@interface ChatBotVoIPRoomInfoPB : WXPBGeneratedMessage

@property (nonatomic) int roomType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *aiMemberList;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *roomHeadImageUrl;
@property (nonatomic) int bizType;
@property (retain, nonatomic) ChatBotVoIPRoomInfoPB_ExtInfo *extInfo;

+ (void)initialize;

@end
