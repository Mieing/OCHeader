@class NSArray, CJPayBDCreateOrderResponse, NSDictionary, CJPayDefaultChannelShowConfig, UIViewController;
@protocol CJPayBaseLoadingProtocol;

@interface CJPayFrontCashierContext : NSObject

@property (readonly, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (copy, nonatomic) id /* block */ latestOrderResponseBlock;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (retain, nonatomic) NSArray *combineConfigsRecord;
@property (copy, nonatomic) NSDictionary *createOrderParams;
@property (copy, nonatomic) NSDictionary *confirmRequestParams;
@property (copy, nonatomic) id /* block */ changeSelectConfigBlock;
@property (copy, nonatomic) id /* block */ gotoCardListBlock;
@property (copy, nonatomic) id /* block */ extCallback;
@property (weak, nonatomic) UIViewController<CJPayBaseLoadingProtocol> *homePageVC;
@property (copy, nonatomic) id /* block */ latestNotSufficientFundIds;
@property (copy, nonatomic) NSDictionary *extParams;
@property (readonly, nonatomic) BOOL isPreStandardDesk;
@property (readonly, nonatomic) BOOL isNeedResultPage;
@property (nonatomic) BOOL hasChangePayMethod;

- (void).cxx_destruct;

@end
