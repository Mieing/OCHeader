@class NSData, NSMutableArray;

@interface ReportKvReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int genstgver;
@property (nonatomic) unsigned int specstgver;
@property (nonatomic) unsigned int uinstgver;
@property (retain, nonatomic) NSMutableArray *datapkg;
@property (retain, nonatomic) NSData *encryptkey;

+ (void)initialize;

- (void)setEncryptkey:(id)a0;
- (id)encryptkey;
- (void)setDatapkg:(id)a0;
- (id)datapkg;
- (void)setUinstgver:(unsigned int)a0;
- (unsigned int)uinstgver;
- (void)setSpecstgver:(unsigned int)a0;
- (unsigned int)specstgver;
- (void)setGenstgver:(unsigned int)a0;
- (unsigned int)genstgver;

@end
