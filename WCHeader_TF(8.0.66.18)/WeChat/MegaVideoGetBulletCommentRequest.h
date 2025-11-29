@class BaseRequest, NSString, MegaVideoBaseRequest, NSData;

@interface MegaVideoGetBulletCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (nonatomic) unsigned long long videoObjectId;
@property (nonatomic) unsigned long long videoTimestamp;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *videoNonceId;

+ (void)initialize;

@end
