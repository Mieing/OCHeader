@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoFavReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (nonatomic) unsigned long long videoObjectId;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long favId;
@property (retain, nonatomic) NSString *videoNonceId;

+ (void)initialize;

@end
