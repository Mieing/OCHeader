@class NSString, NSMutableArray;

@interface ChatToolInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int chooseType;
@property (retain, nonatomic) NSMutableArray *participatorList;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *appusername;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int selectType;
@property (retain, nonatomic) NSMutableArray *authRoomList;

+ (void)initialize;

@end
