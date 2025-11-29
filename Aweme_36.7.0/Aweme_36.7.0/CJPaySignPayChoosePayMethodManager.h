@class NSArray, NSDictionary, CJPayDySignPayChooseCardViewController, CJPayBDCreateOrderResponse;
@protocol CJPayChooseDyPayMethodDelegate;

@interface CJPaySignPayChoosePayMethodManager : NSObject

@property (retain, nonatomic) CJPayDySignPayChooseCardViewController *signPayChoosePayMethodVC;
@property (copy, nonatomic) NSArray *payMethodList;
@property (copy, nonatomic) NSDictionary *indexLinkPayMethodGroupModelDict;
@property (weak, nonatomic) id<CJPayChooseDyPayMethodDelegate> delegate;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (nonatomic) double height;
@property (nonatomic) BOOL hasChangePayMethod;
@property (nonatomic) BOOL closeChoosePageAfterChangeMethod;
@property (nonatomic) BOOL needUpdatePayMethodList;

+ (void)setMemberFirstPayMethod:(id)a0 needLoading:(BOOL)a1 completion:(id /* block */)a2;
+ (id)getPayMode:(unsigned long long)a0;

- (id)initWithOrderResponse:(id)a0;
- (void)p_bindcardSuccess;
- (id)p_getPayMethodList;
- (void)trackerWithEventName:(id)a0 params:(id)a1;
- (void)p_activateCreditAndPay:(id)a0 completion:(id /* block */)a1;
- (void)getChoosePayMethodList:(id /* block */)a0;
- (id)p_createSignPayChoosePayMethodVC;
- (void)p_tryPushSignPayChoosePayMethodVC:(id)a0;
- (id)p_buildPayMethodListWithResponse;
- (id)p_buildPayMethodListInGroup:(id)a0 showConfigDict:(id)a1;
- (void)p_didSelectSignPayPayMethod:(id)a0 loadingView:(id)a1;
- (void)p_didChangeSignPayMethod:(id)a0 loadingView:(id)a1 needRefreshOrder:(BOOL)a2;
- (void)p_setMemberFirstPayMethod:(id)a0 loadingView:(id)a1 needRefreshOrder:(BOOL)a2;
- (id)p_setFirstPayMethodRequestParamWithConfig:(id)a0;
- (void)p_modifyPayMethodGroupSort:(id)a0;
- (id)p_payContextWithConfig:(id)a0;
- (id)p_extParams;
- (void)gotoSignPayChooseDyPayMethod;
- (void)closeSignPayChooseDyPayMethod;
- (void).cxx_destruct;
- (void)dealloc;

@end
