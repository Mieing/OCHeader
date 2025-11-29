@class NSString, CJPayUnifyPreVerifyManager, CJPayMerchantInfo;

@interface CJPayUnifyPreVerifyItemBase : NSObject <CJPayUnifyInteractionInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayUnifyPreVerifyManager *verifyManager;
@property (readonly, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) id /* block */ completeBlock;

- (id)checkType;
- (id)checkTypeName;
- (id)getTrackExtraParams;
- (BOOL)shouldHandleNaviLeftBtnStyle;
- (BOOL)isNaviLeftBtnCloseStyle;
- (BOOL)shouldHandleNaviTitle;
- (id)naviTitleContent;
- (BOOL)shouldHandleNaviLeftBtnClickAction;
- (void)handleNaviLeftBtnClickAction;
- (BOOL)handleConfirmResponse:(id)a0;
- (void)receiveTopRightBtnClickAction:(id)a0;
- (id)p_buildPopupModelPublicParams;
- (id)buildPreVerifyViewWithParams:(id)a0 inputCompletionBlock:(id /* block */)a1;
- (void)startVerifyWithParams:(id)a0;
- (BOOL)isEmbed;
- (id)buildForgetPwdPopupModel;
- (id)buildVerifyPwdErrorPopupModel;
- (id)buildVerifyPwdLockPopupModel;
- (BOOL)handleDefaultActionWithResponse:(id)a0;
- (void)trackForVerifyResult:(id)a0;
- (id)buildConfirmParams;
- (void)addToDisableVerifyTypeArray;
- (BOOL)isEnable;
- (void).cxx_destruct;
- (unsigned long long)verifyType;

@end
