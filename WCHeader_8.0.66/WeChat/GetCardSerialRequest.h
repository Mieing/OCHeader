@class BaseRequest, NSString;

@interface GetCardSerialRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardId;

+ (void)initialize;

@end
