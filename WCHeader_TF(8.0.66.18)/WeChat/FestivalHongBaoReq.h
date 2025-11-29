@class BaseRequest, SKBuiltinBuffer_t, NSData;

@interface FestivalHongBaoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int cgiCmd;
@property (nonatomic) unsigned int outPutType;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqText;
@property (retain, nonatomic) NSData *sendKey;
@property (nonatomic) unsigned long long reqTime;
@property (nonatomic) unsigned int subscribe;

+ (void)initialize;

@end
