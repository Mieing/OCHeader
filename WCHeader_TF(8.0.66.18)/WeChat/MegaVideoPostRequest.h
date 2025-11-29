@class BaseRequest, NSString, MegaVideoBaseRequest, MegaVideoDesc;

@interface MegaVideoPostRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *clientid;
@property (retain, nonatomic) MegaVideoDesc *desc;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;

+ (void)initialize;

@end
