@class NSString, WCMallNetworkHelper, NSDictionary;

@interface WCMallLogicMgr : MMUserService <MMServiceProtocol, WCMallNetworkHelperDelegate, IMsgExt, JSEventExt> {
    WCMallNetworkHelper *m_oWCMallNetworkHelper;
    NSDictionary *m_oBufferFunctionList;
    BOOL m_bGetFunctionList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)OnHandlerFunctionListComeBack:(id)a0 Request:(id)a1 Response:(id)a2 FromCache:(BOOL)a3;
- (void)OnCallBackGetWCMallFunctionList:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)OnCallPayChargeProxy:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)GetWCMallFunctionList;
- (void)GetWCMallFunctionList:(id)a0;
- (void)GetWCMallPayChargeProxyRequest:(id)a0 CMDID:(unsigned int)a1;
- (void)GetWCMallPayFunctionListRequest:(id)a0;
- (void)sendDeleteChargeHistoryRequest:(id)a0;
- (BOOL)IsUsedWCMallPayTelephone;
- (void)SetUsedWCMallPayTelephone;
- (id)GetWCMallOldTelehoneArray;
- (void)SetWCMallOldTelephone:(id)a0 UserName:(id)a1;
- (void)ClearWCMallOldTelephone;
- (unsigned int)getLatestActivityIDShowedTips;
- (void)setLatestActivityIDShowedTips:(unsigned int)a0;
- (void)saveAllTicket:(id)a0;
- (id)getAllTicket;
- (BOOL)isNeedShowProductActivity:(id)a0 ActivityID:(id)a1;
- (void)setShowProductActivity:(id)a0 ActivityID:(id)a1 Showed:(BOOL)a2;
- (BOOL)isNeedShowProductBannerActivity:(id)a0 ActivityID:(id)a1;
- (void)setShowProductBannerActivity:(id)a0 ActivityID:(id)a1 Showed:(BOOL)a2;
- (BOOL)isNeedShowNewInMoreView;
- (BOOL)checkIsRedDotOrNewOverTime;
- (void)clearAllNewOrRedDot;
- (void)setRedDotOrNewLastUpdateTime;
- (BOOL)isNeedShowRedCodeInMoreView;
- (void)setNeedShowNewInMoreView:(BOOL)a0;
- (void)setNeedShowRedCodeInMoreView:(BOOL)a0;
- (void)handleActivityType:(id)a0 ShowedType:(id)a1 FunctionId:(id)a2 ActivityId:(id)a3 Ticket:(id)a4 WalletRegion:(int)a5;
- (void)HandleWCMallActivityUpdate:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)jsJumpWCMall:(id)a0;
- (BOOL)isNeedShowRecommendViewWithId:(id)a0;
- (void)setRecommendIdHasShowed:(id)a0;
- (void).cxx_destruct;

@end
