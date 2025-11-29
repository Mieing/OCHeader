@class NSString, NSDictionary, NSArray;

@interface CJPayLynxPopupUtilModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *jhMerchantId;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *hostDomain;
@property (copy, nonatomic) NSDictionary *processInfo;
@property (copy, nonatomic) NSString *showStyle;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *prepayId;
@property (copy, nonatomic) NSString *isColdLaunch;
@property (copy, nonatomic) NSString *cashierStyle;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *popupId;
@property (copy, nonatomic) NSString *popupSource;
@property (copy, nonatomic) NSString *popupLynxSchema;
@property (copy, nonatomic) NSString *popupLynxInfoKey;
@property (copy, nonatomic) NSDictionary *popupLynxInfo;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (copy, nonatomic) NSArray *openedCheckWays;
@property (nonatomic) BOOL isBioDegrade;
@property (copy, nonatomic) NSDictionary *innerTrackerParams;
@property (copy, nonatomic) id /* block */ lynxPopupActionBlock;

+ (unsigned long long)obtainEventType:(id)a0;
+ (BOOL)couldShowLynxPopupVCWithSourceVC:(id)a0 popupUtilModel:(id)a1 completion:(id /* block */)a2;

- (BOOL)canOpenLynxPopup;
- (id)buildPopupFEParams:(id)a0;
- (void).cxx_destruct;

@end
