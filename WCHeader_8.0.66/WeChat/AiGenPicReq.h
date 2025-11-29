@class BaseRequest, NSString;

@interface AiGenPicReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *agreeStatus;
@property (nonatomic) unsigned int filterEmoji;
@property (retain, nonatomic) NSString *filterStyleColor;
@property (nonatomic) unsigned int posterNum;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *firstStyle;
@property (retain, nonatomic) NSString *filterScale;

+ (void)initialize;

@end
