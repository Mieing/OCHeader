@class JLRCs, NSTimer;

@interface CBManagerTool : NSObject {
    int counts;
    char DetailCode[100];
}

@property (nonatomic) unsigned long long logLevel;
@property (nonatomic) JLRCs *jlrcObj;
@property (retain, nonatomic) NSTimer *timerNFC;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) int readNum;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ NFCReaderCanceled;

+ (id)sharedInstance;

- (void)updateNFCMsg:(id)a0;
- (void)countDowns;
- (void)updateNFCTimer;
- (void)stopNFCWithSuccess:(BOOL)a0 msg:(id)a1;
- (BOOL)isOnlyNumber:(id)a0;
- (void)readPassportWithPassportNumber:(id)a0 birth:(id)a1 date:(id)a2 cid:(id)a3 withIsImg:(BOOL)a4 withMod:(long long)a5 result:(id /* block */)a6;
- (BOOL)isValidIP:(id)a0;
- (id)nullToString:(id)a0;
- (unsigned long long)setIp:(id)a0 port:(long long)a1 envcode:(long long)a2;
- (double)updateNetDelayState;
- (void)startReadIDCardWithNFC:(id)a0 mod:(long long)a1 CardType:(long long)a2 withIsImg:(BOOL)a3 result:(id /* block */)a4;
- (int)isAlphaAndNumber:(id)a0;
- (void).cxx_destruct;

@end
