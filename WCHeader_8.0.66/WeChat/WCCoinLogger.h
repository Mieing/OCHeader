@class NSString;

@interface WCCoinLogger : NSObject

@property (retain, nonatomic) NSString *_reportSessionId;
@property (nonatomic) unsigned long long businessId;
@property (retain, nonatomic) NSString *buyTingVipSession;

+ (void)reportIDKey:(unsigned int)a0;
+ (void)reportKVKey:(unsigned int)a0;
+ (void)reportBuyCoinSuccessCostTime:(unsigned long long)a0;
+ (void)reportBuyCoinSuccess;
+ (void)setupCoinViewReport:(id)a0;
+ (void)setupConsumeButtonReport:(id)a0;
+ (void)setupConsumeTipsReport:(id)a0;
+ (void)setupConsumeHelpReport:(id)a0;
+ (void)setupConsumeDetaiViewReport:(id)a0;

- (id)getReportSessionId;
- (void)genReportSessionId;
- (void).cxx_destruct;

@end
