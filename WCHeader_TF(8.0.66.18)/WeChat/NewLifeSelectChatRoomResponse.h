@class NSString, NSMutableArray;

@interface NewLifeSelectChatRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *selectedList;
@property (retain, nonatomic) NSString *avatarPath;
@property (nonatomic) BOOL confirmed;

+ (void)initialize;

@end
