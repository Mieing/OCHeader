@class NSString;

@interface JLRCs : NSObject

@property (copy, nonatomic) NSString *passportDomin;
@property (nonatomic) unsigned long long mod;
@property (nonatomic) unsigned long long apduLen;
@property (copy, nonatomic) NSString *deviceSN;
@property (nonatomic) long long logLevel;
@property (nonatomic) unsigned long long reTime;
@property void /* function */ *callback;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) int readNum;
@property (retain, nonatomic) id model;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ connectBlock;

+ (id)sharedInstance;

- (int)setIp:(id)a0 andPort:(int)a1 idType:(int)a2;
- (double)testNetWork;
- (void)JL_setQueryInfoParameterWithCardInfoState:(int)a0 withVoucher:(int)a1 withCompositeCardPhoto:(int)a2;
- (void)readIDCard:(id)a0 type:(long long)a1 withIsImg:(BOOL)a2 result:(id /* block */)a3;
- (void)readPassportWithPassportNumber:(id)a0 birth:(id)a1 date:(id)a2 cid:(id)a3 withIsImg:(BOOL)a4 withMod:(long long)a5 result:(id /* block */)a6;
- (void)RPUserClose;
- (id)generateRandomStr:(unsigned long long)a0;
- (id)getUUID:(id)a0;
- (int)bytesToHexStr:(char *)a0 srcLen:(int)a1 res:(char *)a2;
- (int)hexStrToByte:(char *)a0 dest:(char *)a1;
- (id)queryIpWithDomain:(id)a0;
- (void)readIDCard:(id)a0 type:(long long)a1 result:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
