@class NSString, JLNFCMessageModel;

@interface JLReader : NSObject

@property (nonatomic) long long reqidType;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) long long mod;
@property (copy, nonatomic) NSString *ip;
@property (nonatomic) long long port;
@property (nonatomic) long long cardType;
@property (nonatomic) long long envCode;
@property (nonatomic) BOOL isImg;
@property (retain, nonatomic) JLNFCMessageModel *model;
@property (nonatomic) long long httpPort;
@property (retain, nonatomic) JLNFCMessageModel *passportModel;
@property (nonatomic) long long passportMod;
@property (nonatomic) BOOL passportIsImg;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ connectBlock;

+ (id)sharedInstance;

- (int)checkParamWithIsBackImg:(BOOL)a0;
- (void)setReaderConfigWithAppid:(id)a0 withMod:(long long)a1 withIp:(id)a2 withPort:(long long)a3 withCardType:(long long)a4 withEnvCode:(long long)a5 withIsImg:(BOOL)a6 withModel:(id)a7 withConfigState:(long long)a8;
- (void)startReadIDCardWithResult:(id /* block */)a0;
- (void)readPassportWithPassportNumber:(id)a0 birth:(id)a1 date:(id)a2 result:(id /* block */)a3;
- (double)updateNetDelayStateWithIp:(id)a0 withPort:(long long)a1 withEnvCode:(long long)a2;
- (void)JL_setQueryInfoParameterWithCardInfoState:(int)a0 withVoucher:(int)a1 withCompositeCardPhoto:(int)a2;
- (void).cxx_destruct;
- (id)getErrorMessage:(long long)a0;

@end
