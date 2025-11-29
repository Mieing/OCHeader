@class AWEGoodsDetailPageContext, DUXAlertDialog;

@interface AWEPOIAgreementProvider : NSObject

@property (nonatomic) BOOL isShowingAgreementAlert;
@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;

- (void)requestAndShowAgreementAlertIfNeedWithHeader:(id)a0 completion:(id /* block */)a1;
- (id)p_lynxAgreementViewUrl;
- (void)p_transferToWebLink:(id)a0;
- (void)p_confirmAgreementAction;
- (void)p_cancelAgreementAction;
- (void)p_show:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
