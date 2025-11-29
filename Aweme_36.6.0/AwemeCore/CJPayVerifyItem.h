@class NSString, CJPayBaseVerifyManager;

@interface CJPayVerifyItem : NSObject <CJPayTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayBaseVerifyManager *manager;
@property (nonatomic) unsigned long long verifyType;
@property (copy, nonatomic) NSString *verifySource;

- (void)event:(id)a0 params:(id)a1;
- (id)checkType;
- (id)getTrackParams:(id)a0;
- (void)handleVerifyResponse:(id)a0;
- (void)bindManager:(id)a0;
- (void)btmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (BOOL)p_isBioPayAvailable;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (id)verifyEngimaImpl;
- (id)p_buildPopupModelPublicParams;
- (id)buildForgetPwdPopupModel;
- (id)buildVerifyPwdErrorPopupModel;
- (id)buildVerifyPwdLockPopupModel;
- (id)p_buildRetainInfoV2Config;
- (id)p_setupCommonParamsForPopupModel;
- (id)getBioVerifyStatus;
- (id)getBioClientUnavailableReason;
- (id)handleSourceType;
- (void)notifyWakeVerifyItemFail;
- (void)notifyVerifyCancel;
- (id)buildRetainUtilModel;
- (BOOL)lastConfirmVerifyItemTypeEqualToSelf;
- (id)selectionVoucherTrackParams;
- (void).cxx_destruct;
- (void)receiveEvent:(id)a0;

@end
