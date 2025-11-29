@class NSString, WCRedEnvelopesConfirmShowResourcesCgi, WCRedEnvelopesGetShowResourcesCgi, JSEvent, WCRedEnvelopesDeleteResourceCgi, WCRedEnvelopesSelectSkinViewController, WCRedEnvelopesControlData, WCRedEnvelopesExpiredSkinViewController;

@interface WebviewJSEventHandler_getRedPacketDone : WebviewJSEventHandlerBase <WCRedEnvelopesGetShowResourcesCgiDelegate, WCRedEnvelopesSelectSkinViewControllerDelegate, WCRedEnvelopesConfirmShowResourcesCgiDelegate, WCRedEnvelopesDeleteResourceCgiDelegate, GetDefaultRedPacketSkinCgiDelegate>

@property (retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi;
@property (retain, nonatomic) WCRedEnvelopesSelectSkinViewController *selectSkinViewController;
@property (retain, nonatomic) WCRedEnvelopesExpiredSkinViewController *expiredSkinViewController;
@property (retain, nonatomic) WCRedEnvelopesControlData *m_data;
@property (retain, nonatomic) JSEvent *m_event;
@property (retain, nonatomic) WCRedEnvelopesConfirmShowResourcesCgi *confirmShowResourcesCgi;
@property (retain, nonatomic) NSString *selectedPacketId;
@property (retain, nonatomic) WCRedEnvelopesDeleteResourceCgi *deleteShowResourceCgi;
@property (nonatomic) BOOL bIsFromLoadingMoreInvalidData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)startGetDefualtRedPacketSkinCgi;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)a0 type:(unsigned int)a1;
- (void)handleSourceListTypeInvalidResponse:(id)a0;
- (void)pushWCRedEnvelopesExpiredSkinViewController;
- (void)appendShowSourceResp:(id)a0;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)a0;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)a0;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)a0;
- (void)onWCRedEnvelopesDeleteResourceCgiResponseOK:(id)a0;
- (BOOL)isHbEnvelopSourceValid:(id)a0;
- (void)onWCRedEnvelopesDeleteResourceCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesExpireSkinGetNextPage:(id)a0;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerBack;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerDelete:(id)a0;
- (void).cxx_destruct;

@end
