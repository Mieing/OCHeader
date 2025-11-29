@class BaseRequest, NSString, PubKeyInfo, SKBuiltinBuffer_t;

@interface H5AuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *h5Domain;
@property (retain, nonatomic) SKBuiltinBuffer_t *ccdata;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) PubKeyInfo *pubkey;

+ (void)initialize;

- (void)setPubkey:(id)a0;
- (id)pubkey;
- (void)setScope:(id)a0;
- (id)scope;
- (void)setCcdata:(id)a0;
- (id)ccdata;
- (void)setH5Domain:(id)a0;
- (id)h5Domain;
- (void)setH5Version:(unsigned int)a0;
- (unsigned int)h5Version;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
