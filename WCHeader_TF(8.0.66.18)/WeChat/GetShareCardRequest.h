@class BaseRequest, NSString;

@interface GetShareCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardId;

+ (void)initialize;

@end
