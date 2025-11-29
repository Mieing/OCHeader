@class JLRCs;

@interface RPManagerTool : NSObject

@property (retain, nonatomic) JLRCs *jlrc_RP;
@property (nonatomic) long long reqidType;

+ (id)sharedInstance;

- (BOOL)isValidIP:(id)a0;
- (id)generateRandStr:(unsigned long long)a0;
- (int)setRPReader;
- (int)JLReadPassportByCid:(char *)a0 andReqid:(char *)a1 MKZSm3:(id)a2;
- (id)getSM3withPassportNumber:(id)a0 birth:(id)a1 date:(id)a2;
- (int)beforeSendFileData:(id)a0 andNewReqid:(char *)a1;
- (int)sendFileData:(id)a0 andNewReqid:(char *)a1 withReadTime:(int)a2 andInfoData:(char *)a3;
- (void)sendLastDataWithErrCode:(int)a0 withSodFile:(id)a1 withReqid:(id)a2 withCid:(id)a3 withReadTime:(float)a4;
- (void).cxx_destruct;

@end
