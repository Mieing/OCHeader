@class MMListenReportClientInfo, BaseRequest, NSString, MMListenRoomMessage, MMListenMusicBaseRequest;

@interface MMListenRoomChatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenRoomMessage *message;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;

+ (void)initialize;

@end
