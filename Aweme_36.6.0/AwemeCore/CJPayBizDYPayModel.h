@class CJPayHalfPageBaseViewController, NSString, NSDictionary, CJPayIntegratedCashierProcessManager, CJPayCreateOrderResponse, CJPayDefaultChannelShowConfig;
@protocol CJPayIntegratedCashierHomeVCProtocol;

@interface CJPayBizDYPayModel : NSObject

@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (weak, nonatomic) CJPayHalfPageBaseViewController<CJPayIntegratedCashierHomeVCProtocol> *homeVC;
@property (copy, nonatomic) NSString *createResponseStr;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) CJPayCreateOrderResponse *bizCreateOrderResponse;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (copy, nonatomic) NSString *bizPayOuterAppId;
@property (copy, nonatomic) NSString *cj_merchantID;
@property (copy, nonatomic) NSString *intergratedTradeIdentify;
@property (copy, nonatomic) NSString *processStr;
@property (copy, nonatomic) NSString *jhResultPageStyle;
@property (weak, nonatomic) CJPayIntegratedCashierProcessManager *processManager;

- (BOOL)isNeedQueryBizOrder;
- (void).cxx_destruct;

@end
