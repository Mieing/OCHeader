@class NSString, NSArray, NSNumber;

@interface WASafeKeyboard : TenpayMiniProgramKeyboard

@property (retain, nonatomic) NSString *papramCert;
@property (retain, nonatomic) NSString *paramSalt;
@property (retain, nonatomic) NSArray *paramCustomHash;
@property (retain, nonatomic) NSNumber *paramTimeStamp;
@property (retain, nonatomic) NSNumber *paramNonce;
@property (nonatomic) long long passwordLen;

- (id)initWithCert:(id)a0 TextField:(id)a1;
- (void)dealloc;
- (void)captureScreenDidChange;
- (void)parseSafePasswordParam:(id)a0;
- (id)inputEncryptData:(unsigned long long)a0;
- (id)getParamError;
- (id)getEncryptError;
- (id)exeCustomHash;
- (void).cxx_destruct;

@end
