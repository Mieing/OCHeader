@class NSData, NSMutableArray, HeavyUserReqInfo;

@interface CliReportKVReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int generalVersion;
@property (nonatomic) unsigned int specialVersion;
@property (nonatomic) unsigned int whiteOrBlackUinVersion;
@property (retain, nonatomic) NSMutableArray *dataPkg;
@property (retain, nonatomic) NSData *randomEncryKey;
@property (retain, nonatomic) HeavyUserReqInfo *heavyUserInfo;

+ (void)initialize;

- (void)setHeavyUserInfo:(id)a0;
- (id)heavyUserInfo;
- (void)setRandomEncryKey:(id)a0;
- (id)randomEncryKey;
- (void)setDataPkg:(id)a0;
- (id)dataPkg;
- (void)setWhiteOrBlackUinVersion:(unsigned int)a0;
- (unsigned int)whiteOrBlackUinVersion;
- (void)setSpecialVersion:(unsigned int)a0;
- (unsigned int)specialVersion;
- (void)setGeneralVersion:(unsigned int)a0;
- (unsigned int)generalVersion;

@end
