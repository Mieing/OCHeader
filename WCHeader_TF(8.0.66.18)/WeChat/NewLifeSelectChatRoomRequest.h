@class NSMutableArray;

@interface NewLifeSelectChatRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *selectedList;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) NSMutableArray *recentChatroomList;

+ (void)initialize;

@end
