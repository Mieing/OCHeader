@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface PrecheckAffiliatedAcctRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) NSString *clientSessionId;
@property (nonatomic) unsigned int regScene;

+ (void)initialize;

@end
