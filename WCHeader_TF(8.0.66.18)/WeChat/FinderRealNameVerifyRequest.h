@class BaseRequest, NSString;

@interface FinderRealNameVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *authToken;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *code;

+ (void)initialize;

@end
