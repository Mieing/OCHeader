@class BaseRequest, NSString;

@interface AddFavItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *object;
@property (retain, nonatomic) NSString *transferCtx;
@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned long long cliCreateTime;

+ (void)initialize;

@end
