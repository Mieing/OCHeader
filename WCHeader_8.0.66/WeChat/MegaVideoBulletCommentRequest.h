@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoBulletCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (nonatomic) unsigned long long videoObjectId;
@property (nonatomic) unsigned long long videoTimestamp;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long deleteCommentId;
@property (retain, nonatomic) NSString *videoNonceId;

+ (void)initialize;

@end
