@class NSString, NSDictionary, NSMutableDictionary, CJPayDyPayLoginContext, NSNumber;

@interface CJPayDyPayProcessConfigModel : NSObject

@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSString *dypayProcessId;
@property (retain, nonatomic) NSMutableDictionary *requestExtParams;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) NSMutableDictionary *bizTrackerParams;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isFromOuter;
@property (nonatomic) BOOL isNeedLogin;
@property (nonatomic) BOOL haveAgreedPrivacyAlert;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) long long openHomePageLoadingType;
@property (copy, nonatomic) NSString *package;
@property (copy, nonatomic) NSString *prepayId;
@property (copy, nonatomic) NSString *preEntrustWebId;
@property (copy, nonatomic) NSString *payscoreApplyToken;
@property (copy, nonatomic) NSString *merchantId;
@property (retain, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSString *containerWay;
@property (retain, nonatomic) CJPayDyPayLoginContext *payLoginContext;
@property (copy, nonatomic) NSDictionary *extParams;

+ (id)handleParamsFromOuter:(id)a0;

- (id)initWithSchemaParams:(id)a0;
- (void)insertScanParamsIfNeed;
- (void)insertTrackerExtParams:(id)a0;
- (void)trackWithEvent:(id)a0 extParams:(id)a1;
- (void)trackWalletCashierPreLoginPayPageImpWithResponse:(id)a0 trackerParams:(id)a1;
- (long long)getDyPayProductType;
- (void)insertRequestExtParams:(id)a0;
- (void).cxx_destruct;

@end
