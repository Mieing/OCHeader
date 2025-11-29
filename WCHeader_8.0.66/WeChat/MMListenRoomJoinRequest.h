@class BaseRequest, NSString;

@interface MMListenRoomJoinRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;

+ (void)initialize;

@end
