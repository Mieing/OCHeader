@class IESECBuyNowPayStatusInfoModel, NSArray, NSDictionary, IESECTracker, NSMutableDictionary, NSString, UIViewController;
@protocol IESECBuyNowOrderContext, IESECBuyNowVCDelegate;

@interface IESECBuyNowCreateOrderService : NSObject <IESECBuyNowOrderInterface>

@property (retain, nonatomic) id<IESECBuyNowOrderContext> context;
@property (retain, nonatomic) IESECTracker *tracker;
@property (weak, nonatomic) UIViewController<IESECBuyNowVCDelegate> *buynowVC;
@property (retain, nonatomic) NSDictionary *payCodeNotifyDic;
@property (retain, nonatomic) NSDictionary *continuePayCodeNotifyDic;
@property (nonatomic) long long ttpayFaildCheckTimes;
@property (nonatomic) long long maxTimes;
@property (retain, nonatomic) NSArray *checkPayStatusTimesGaps;
@property (retain, nonatomic) IESECBuyNowPayStatusInfoModel *payStatusInfo;
@property (retain, nonatomic) NSDictionary *payCheckParams;
@property (nonatomic) unsigned long long buyStatus;
@property (nonatomic) unsigned long long ttpayCode;
@property (retain, nonatomic) NSMutableDictionary *trackerCommonParams;
@property (retain, nonatomic) NSString *checkSource;
@property (nonatomic) BOOL needToast;
@property (retain, nonatomic) NSString *failMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkPayResult;
- (void)ttPayWithCheckHandler:(id /* block */)a0;
- (void)handleContinuePayResult:(BOOL)a0;
- (void)handleBuyNowPayResult:(BOOL)a0;
- (void)gotoNextPage;
- (void)invokeGuidePageCompletion:(id /* block */)a0;
- (void)handleExtraActionForNextPage;
- (void)checkPayResultWithParams:(id)a0 curTimes:(long long)a1;
- (void)trackerOrderPerformance;
- (void)handlePayResult:(BOOL)a0;
- (void)payAndCheckWithParams:(id)a0;
- (void)nonAppcheckPayResult;
- (id)initWithWithContext:(id)a0 buyNowVC:(id)a1 tracker:(id)a2;
- (void).cxx_destruct;

@end
