@class BaseRequest, NSString;

@interface GetCheersSignatureForWerunRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *iconId;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
