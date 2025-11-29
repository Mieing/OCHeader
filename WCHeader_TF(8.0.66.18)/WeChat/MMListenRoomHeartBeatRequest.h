@class BaseRequest, NSString, NSData;

@interface MMListenRoomHeartBeatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSData *cookie;
@property (nonatomic) BOOL offline;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
