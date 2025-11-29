@class StoreEmotionExchangeEmotionPackCgi, EmoticonStoreItem, NSString;
@protocol EmoticonStorePackDownloadLogicDelegate;

@interface EmoticonStorePackDownloadLogic : NSObject <StoreEmotionExchangeEmotionPackCgiDelegate, ICdnComMgrExt>

@property (retain, nonatomic) EmoticonStoreItem *item;
@property (retain, nonatomic) StoreEmotionExchangeEmotionPackCgi *packCgi;
@property (weak, nonatomic) id<EmoticonStorePackDownloadLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStoreItem:(id)a0;
- (BOOL)tryDownloadWithScence:(int)a0 isAutomatic:(BOOL)a1;
- (BOOL)cancelDownload;
- (BOOL)createExchangeCgiWithScence:(int)a0 isAutomatic:(BOOL)a1;
- (BOOL)downloadAndInstallEmoticon;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)a0 DownloadInfo:(id)a1;
- (void)onExchangeEmotionPackCgiOkWithDesignerSetKey:(id)a0 needUpdatePids:(id)a1;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)a0;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)a0 AndRet:(int)a1 ErroMsg:(id)a2;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (id)getReportStr:(id)a0;
- (id)mediaInfoForEmoticonItem:(id)a0;
- (BOOL)IsCdnEmoticonPackageDownlaodFromClientID:(id)a0;
- (void).cxx_destruct;

@end
