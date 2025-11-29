@class BaseRequest, MegaVideoBaseRequest, NSData;

@interface MegaVideoGetLikeListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
