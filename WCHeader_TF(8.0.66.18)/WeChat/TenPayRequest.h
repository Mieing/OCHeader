@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface TenPayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int cgiCmd;
@property (nonatomic) unsigned int outPutType;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqText;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqTextWx;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *crtNo;

+ (void)initialize;

@end
