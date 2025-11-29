@class BaseRequest, NSString;

@interface MMListenChatRoomCreateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int roomType;
@property (retain, nonatomic) NSString *presetPlaylistCategoryId;
@property (retain, nonatomic) NSString *presetListenId;

+ (void)initialize;

@end
