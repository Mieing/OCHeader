@class BaseRequest, BaseEvent, NSString;

@interface RecordExtraVideoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BaseEvent *baseEvent;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *packageSign;
@property (retain, nonatomic) NSString *serialId;
@property (retain, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSString *aesKey;

+ (void)initialize;

@end
