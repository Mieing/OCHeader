@class NSString, NSDictionary, CJPayCreateOrderResponse, CJPayUnifyHomePageModel;

@interface CJPayUnifyPayIntegratedAdapter : NSObject <CJPayUnifyHomePageModelBuildProtocol>

@property (retain, nonatomic) CJPayCreateOrderResponse *createResponse;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSString *initialProcessStr;
@property (retain, nonatomic) CJPayUnifyHomePageModel *homePageModel;
@property (copy, nonatomic) NSString *cashierServerMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizParams:(id)a0 createResponse:(id)a1;
- (void)p_updateHomePageModelWithCreateResponse:(id)a0;
- (id)p_buildCommonModelWithCreateResponse:(id)a0;
- (id)buildUnifyHomePageModel;
- (void)traceConfirmEvent;
- (void).cxx_destruct;

@end
