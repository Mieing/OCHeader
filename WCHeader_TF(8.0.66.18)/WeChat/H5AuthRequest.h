@class BaseRequest, NSString, PubKeyInfo, SKBuiltinBuffer_t;

@interface H5AuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *h5Domain;
@property (retain, nonatomic) SKBuiltinBuffer_t *ccdata;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) PubKeyInfo *pubkey;

+ (void)initialize;

@end
