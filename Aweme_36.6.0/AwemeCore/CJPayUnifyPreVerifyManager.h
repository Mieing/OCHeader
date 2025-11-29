@class NSMutableDictionary, NSDictionary, NSString, CJPayBaseViewController, CJPayUnifyPreVerifyItemBase, NSMutableArray;
@protocol CJPayUnifyHomeVCProtocol, CJPayUnifyPreVerifyDelegate, CJPay3DSVerifyProtocol;

@interface CJPayUnifyPreVerifyManager : NSObject <CJPayTrackerProtocol>

@property (weak, nonatomic) CJPayBaseViewController<CJPayUnifyHomeVCProtocol> *homePageVC;
@property (weak, nonatomic) id<CJPayUnifyPreVerifyDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *preVerifyConfigDict;
@property (retain, nonatomic) NSMutableDictionary *verifyItemsDic;
@property (retain, nonatomic) CJPayUnifyPreVerifyItemBase *lastWakeItem;
@property (retain, nonatomic) CJPayUnifyPreVerifyItemBase *lastWakeEmbedItem;
@property (copy, nonatomic) NSString *tradeNo;
@property (retain, nonatomic) NSMutableArray *disableVerifyTypeArray;
@property (retain, nonatomic) id<CJPay3DSVerifyProtocol> dsVerifyImpl;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSString *lastPWD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithHomePageVC:(id)a0 delegate:(id)a1;

- (void)event:(id)a0 params:(id)a1;
- (id)dsGetTradeInfo;
- (BOOL)hasForeignCardInAssetList;
- (id)dsGetMerchantInfo;
- (id)dsCurSelectConfig;
- (void)trackBtmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (BOOL)sendEventTOVC:(unsigned long long)a0 obj:(id)a1;
- (id)cashierExtraTrackerParams;
- (id)commonButtonInfoModelWithResponse:(id)a0;
- (id)verifyInteractionInterceptor;
- (id)buildVerifyViewWithVerifyType:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)isInitialVerifyType:(unsigned long long)a0;
- (unsigned long long)curSelectConfigPreSpecialVerifyType;
- (id)switchModelWithVerifyType:(unsigned long long)a0;
- (unsigned long long)preVerifyTypeWithActionStr:(id)a0;
- (id)trackForCurrentCheckTypeName;
- (id)trackForCurrentCheckType;
- (unsigned long long)curSelectConfigPreVerifyType;
- (void)startVerifyWithVerifyType:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)isBackupVerifyType:(unsigned long long)a0;
- (void)trackVerifyResult:(id)a0;
- (id)encryptContext;
- (BOOL)handleConfirmResponse:(id)a0;
- (BOOL)isEnableVerifyType:(unsigned long long)a0;
- (BOOL)checkVerifyInDisableVerifyTypeArray:(unsigned long long)a0;
- (void)addDisabledVerifyType:(unsigned long long)a0;
- (void)changeVerifyTypeWithChangeModel:(id)a0;
- (unsigned long long)getLastWakeVerifyType;
- (unsigned long long)p_preVerifyTypeWithUserInfo:(id)a0 priorPwdCheckWay:(id)a1;
- (unsigned long long)p_getVerifyTypeWithSwitchModel:(id)a0;
- (id)p_getVerifyItemWithType:(unsigned long long)a0;
- (unsigned long long)p_preVerifyTypeWithPwdCheckWay:(id)a0;
- (BOOL)p_isCanShowSwitchModel:(id)a0 withVerifyType:(unsigned long long)a1;
- (void)p_didFinishPreVerifyWithVerifyType:(unsigned long long)a0 resultModel:(id)a1;
- (id)p_buildResultModelWithType:(unsigned long long)a0 message:(id)a1 params:(id)a2;
- (void)p_tryChangeVerifyTypeWithChangeModel:(id)a0 params:(id)a1;
- (id)p_popSourceMapString:(unsigned long long)a0;
- (void).cxx_destruct;

@end
