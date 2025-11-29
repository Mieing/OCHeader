@class BaseRequest, NSString;

@interface MMListenChatRoomUpdateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isClose;
@property (nonatomic) BOOL generatePlaylistWhileClosing;

+ (void)initialize;

@end
