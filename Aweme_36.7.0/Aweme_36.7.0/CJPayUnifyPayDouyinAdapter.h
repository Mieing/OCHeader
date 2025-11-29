@class CJPayBDCreateOrderResponse, NSDictionary, NSString, CJPayDyPayLoginContext, CJPayUnifyHomePageModel;

@interface CJPayUnifyPayDouyinAdapter : NSObject <CJPayUnifyHomePageModelBuildProtocol>

@property (retain, nonatomic) CJPayUnifyHomePageModel *homePageModel;
@property (retain, nonatomic) CJPayDyPayLoginContext *payLoginContext;
@property (nonatomic) BOOL isFromOuter;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *bdCreateOrderResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizParams:(id)a0 payLoginContext:(id)a1 bdCreateResponse:(id)a2;
- (void)p_updateHomePageModelWithCreateResponse:(id)a0;
- (id)p_buildCommonModelWithCreateResponse:(id)a0;
- (id)buildUnifyHomePageModel;
- (void)traceConfirmEvent;
- (void).cxx_destruct;

@end
