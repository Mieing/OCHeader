@class NSMutableDictionary, WAContactGetter;

@interface OpenApiAppMsgGenerator : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) WAContactGetter *contactGetter;
@property (retain, nonatomic) NSMutableDictionary *cdnUploadQueue;

- (void)generateAppMsgFromAppData:(id)a0 toUserName:(id)a1 fromAppId:(id)a2 translateLinkExtraInfo:(id)a3 callback:(id /* block */)a4;
- (void)handleMsgWrap:(id)a0 onSelectContact:(id)a1 appData:(id)a2 fromAppId:(id)a3 callback:(id /* block */)a4;
- (void)handleAppBrandObjectType:(id)a0 internalMediaMsg:(id)a1 toUserName:(id)a2 fromAppId:(id)a3 translateLinkExtraInfo:(id)a4 callback:(id /* block */)a5;
- (void)handleImageObjectType:(id)a0 internalMediaMsg:(id)a1 toUserName:(id)a2 fromAppId:(id)a3 callback:(id /* block */)a4;
- (void)handleVideoObjectType:(id)a0 internalMediaMsg:(id)a1 toUserName:(id)a2 fromAppId:(id)a3 translateLinkExtraInfo:(id)a4 callback:(id /* block */)a5;
- (void)handleEnterpriseCardObjectType:(id)a0 internalMediaMsg:(id)a1 toUserName:(id)a2 fromAppId:(id)a3 translateLinkExtraInfo:(id)a4 callback:(id /* block */)a5;
- (void)handleWeWorkRecordObjectType:(id)a0 internalMediaMsg:(id)a1 toUserName:(id)a2 fromAppId:(id)a3 translateLinkExtraInfo:(id)a4 callback:(id /* block */)a5;
- (void)doFetchShareInfoWithMsg:(id)a0 onSelectContact:(id)a1 mediaMessage:(id)a2 withShareTicket:(BOOL)a3 fromAppId:(id)a4 callback:(id /* block */)a5;
- (id)getShareActivityInfoStr:(id)a0;
- (void)doUploadImage:(id)a0 onSelectContact:(id)a1 mediaMessage:(id)a2 fromAppId:(id)a3 callback:(id /* block */)a4;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetShareInfoResp:(id)a0;
- (void)handleDecryptWxWorkChatRecordResp:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
