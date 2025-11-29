@class NSString, NSMutableDictionary, NSDictionary, CJPayNavigationController, NSArray, NSMutableSet, CJPayUnifyVerifyResultModel;
@protocol CJPay3DSVerifyProtocol;

@interface CJPayUnifyVerifyController : NSObject

@property (retain, nonatomic) NSMutableDictionary *verifyItemsDic;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSArray *preCJPages;
@property (retain, nonatomic) NSMutableSet *finishProducts;
@property (retain, nonatomic) CJPayUnifyVerifyResultModel *lastResultModel;
@property (nonatomic) BOOL hasNextItem;
@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *verifyTokenStr;
@property (copy, nonatomic) NSDictionary *verifyTokenDic;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (retain, nonatomic) id<CJPay3DSVerifyProtocol> dsVerifyImpl;
@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) CJPayNavigationController *preCJPayNavi;
@property (nonatomic) BOOL completeAlongsideDismiss;

+ (id)getUnifyVerifyItemsConfigDic;
+ (id)getUnifyVerifyFlowNameConfigDic;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)push:(id)a0 animated:(BOOL)a1;
- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_verifyWithProducts:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)topVCIsHalfVC;
- (void)p_closeCallbackWithResultModel:(id)a0;
- (id)p_getParamsWithProductName:(id)a0;
- (void)startVerifyWithProduct:(id)a0 verifyParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)startVerifyWithProduct:(id)a0 verifyParams:(id)a1 trackParams:(id)a2 completionBlock:(id /* block */)a3;
- (unsigned long long)p_getUnifyVerifyTypeWithFlowName:(id)a0;
- (id)p_getVerifyItemWithType:(unsigned long long)a0 productName:(id)a1;
- (void).cxx_destruct;

@end
