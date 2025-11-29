@class BaseRequest, NSString;

@interface JoinTrackRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatname;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
