@class BaseRequest, NSString;

@interface GiftCardItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) unsigned int staticScene;

+ (void)initialize;

@end
