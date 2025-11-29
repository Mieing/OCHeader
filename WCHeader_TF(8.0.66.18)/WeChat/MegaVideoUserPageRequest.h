@class BaseRequest, NSString, NSData, MegaVideoBaseRequest, MegaVideoClientStatus;

@interface MegaVideoUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (retain, nonatomic) MegaVideoClientStatus *status;

+ (void)initialize;

@end
