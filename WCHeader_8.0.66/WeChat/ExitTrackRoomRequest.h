@class BaseRequest, NSString;

@interface ExitTrackRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *trackRoomId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
