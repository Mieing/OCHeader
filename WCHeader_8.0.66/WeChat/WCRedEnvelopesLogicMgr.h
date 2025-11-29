@class NSString, ContactUpdateHelper, WCRedEnvelopesGetShowResourcesCgi, WCRedEnvelopesNetworkHelper;

@interface WCRedEnvelopesLogicMgr : MMUserService <WCRedEnvelopesGetShowResourcesCgiDelegate, MMServiceProtocol, WCRedEnvelopesNetworkHelperDelegate> {
    WCRedEnvelopesNetworkHelper *m_networkHelper;
}

@property (retain, nonatomic) ContactUpdateHelper *m_senderNickNameHelper;
@property (retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi;
@property (nonatomic) BOOL m_isDownloadingNewYearRes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)a0 Request:(id)a1;
- (void)OnWCToHongbaoCommonErrorResponse:(id)a0 Request:(id)a1;
- (void)OnWCToOpenIMHongbaoCommonResponse:(id)a0 Request:(id)a1;
- (void)OnWCToLiveStreamHongbaoCommonResponse:(id)a0 Request:(id)a1;
- (void)OnWCToHongbaoCommonResponse:(id)a0 Request:(id)a1;
- (void)predownloadHbShowResource:(id)a0;
- (void)uploadNewYearResource;
- (void)preDownloadNewYearResource:(id)a0 fileId:(id)a1 aesKey:(id)a2;
- (void)addOpenIMReceiveSystemMsgWithDic:(id)a0;
- (void)addReceiveSystemMsgWithDic:(id)a0;
- (void)OnWCToEnterpriseHBCommonErrorResponse:(id)a0 Request:(id)a1;
- (void)OnWCToEnterpriseHBCommonSystemErrorResponse:(id)a0 Request:(id)a1;
- (void)OnWCToEnterpriseHBCommonResponse:(id)a0 Request:(id)a1;
- (void)OnWCToBizHBCommonErrorResponse:(id)a0 Request:(id)a1;
- (void)OnWCToBizHBCommonSystemErrorResponse:(id)a0 Request:(id)a1;
- (void)OnWCToBizHBCommonResponse:(id)a0 Request:(id)a1;
- (void)OnWCToAsyncBizSubscribeResponse:(id)a0 Request:(id)a1;
- (void)GetOpenIMHongbaoBusinessRequest:(id)a0 CMDID:(unsigned int)a1 OutputType:(unsigned int)a2;
- (void)GetHongbaoBusinessRequest:(id)a0 CMDID:(unsigned int)a1 OutputType:(unsigned int)a2;
- (void)GetYearHongbaoRequest:(id)a0 CMDID:(unsigned int)a1 OutputType:(unsigned int)a2;
- (void)GetEnterpriseHongbaoBusinessRequest:(id)a0 CMDID:(unsigned int)a1 SendKey:(id)a2 OutputType:(unsigned int)a3 ShouldSubscribe:(BOOL)a4;
- (void)GetEnterpriseHongbaoBizRequest:(id)a0 CMDID:(unsigned int)a1 SendKey:(id)a2 OutputType:(unsigned int)a3;
- (void)QueryRedEnvelopesUserInfo:(id)a0;
- (void)QueryLiveStreamRedEnvelopesUserInfo:(id)a0;
- (void)QueryH5RedEnvelopesUserInfo:(id)a0;
- (void)QueryRedEnvelopesUserInfoNoCache:(id)a0;
- (void)QueryLiveStreamRedEnvelopesUserInfoNoCache:(id)a0;
- (void)QueryH5RedEnvelopesUserInfoNoCache:(id)a0;
- (void)QueryOpenIMRedEnvelopesUserInfo:(id)a0;
- (void)QueryOpenIMRedEnvelopesUserInfoNoCache:(id)a0;
- (void)GenOpenIMRedEnvelopesPayRequest:(id)a0;
- (void)GenRedEnvelopesPayRequest:(id)a0;
- (void)GenLiveStreamRedEnvelopesPayRequest:(id)a0;
- (void)ReceiverQueryLiveStreamRedEnvelopesRequest:(id)a0;
- (void)OpenLiveStreamRedEnvelopesRequest:(id)a0;
- (void)QueryLiveStreamRedEnvelopesDetailRequest:(id)a0;
- (void)GenH5RedEnvelopesPayRequest:(id)a0;
- (void)GenYearRedEnvelopesPayRequest:(id)a0;
- (void)SendShareRedEnvelopesoRequest:(id)a0;
- (void)ReceiverQueryRedEnvelopesRequest:(id)a0;
- (void)ReceiverQueryOpenIMRedEnvelopesRequest:(id)a0;
- (void)OpenOpenIMRedEnvelopesRequest:(id)a0;
- (void)QueryOpenIMRedEnvelopesDetailRequest:(id)a0;
- (void)OpenRedEnvelopesRequest:(id)a0;
- (void)QueryRedEnvelopesDetailRequest:(id)a0;
- (void)QueryUserSendOrReceiveRedEnveloperListRequest:(id)a0;
- (void)DeleteRedEnvelopesRecord:(id)a0;
- (void)ClearserSendOrReceiveRedEnveloperListRequest:(id)a0;
- (void)ThanksForRedEnvelopesRequest:(id)a0;
- (void)OpenEnterpriseRedEnvelopesRequest:(id)a0 SendKey:(id)a1 ShouldSubscribe:(BOOL)a2;
- (void)ReceiveBizEnterpriseRedEnvelopesRequest:(id)a0;
- (void)OpenBizEnterpriseRedEnvelopesRequest:(id)a0;
- (void)CheckAuthBizEnterpriseRedEnvelopesRequest:(id)a0;
- (void)AsyncBizSubcribeRequest:(id)a0;
- (void)predownloadHongBaoShowResource;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)a0 type:(unsigned int)a1;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
