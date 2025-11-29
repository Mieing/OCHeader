@class CBManagerTool, NSTimer, NSString;

@interface JLReaderNoUI : NSObject

@property (retain, nonatomic) CBManagerTool *tool;
@property (nonatomic) long long iRetrytimes;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *cid;
@property (nonatomic) long long mod;
@property (nonatomic) long long cardType;
@property (nonatomic) long long errCodeTmp;
@property (nonatomic) BOOL isBackImg;
@property (copy, nonatomic) NSString *bizidTmp;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ idCardBlock;

+ (id)sharedInstance;

- (void)onNFCFunAC;
- (void)startReadWithcid:(id)a0 mod:(long long)a1 ip:(id)a2 port:(long long)a3 cardType:(long long)a4 envCode:(long long)a5 withIsImg:(BOOL)a6 result:(id /* block */)a7;
- (void)readWithPassportNumber:(id)a0 birth:(id)a1 date:(id)a2 cid:(id)a3 ip:(id)a4 port:(long long)a5 envCode:(long long)a6 withIsImg:(BOOL)a7 withMod:(long long)a8 result:(id /* block */)a9;
- (void).cxx_destruct;
- (void)updateTimer;
- (void)dealloc;
- (void)countDown;

@end
