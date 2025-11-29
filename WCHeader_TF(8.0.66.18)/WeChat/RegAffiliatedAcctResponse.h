@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface RegAffiliatedAcctResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *randomPasswd;
@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) SKBuiltinBuffer_t *finderContact;

+ (void)initialize;

@end
