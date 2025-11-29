@class BaseRequest, NSString;

@interface CheckShortLinkReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *shortLink;
@property (nonatomic) unsigned int fromBusinessType;

+ (void)initialize;

@end
