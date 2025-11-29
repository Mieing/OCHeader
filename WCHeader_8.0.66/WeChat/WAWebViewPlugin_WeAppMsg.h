@class WAShareAppMessageInnerTemporaryModel, NSString, NSDictionary, WAShareAppMessageInnerPermanentModel;
@protocol WeAppMsgHandleDelegate;

@interface WAWebViewPlugin_WeAppMsg : WAWebViewPlugin_embedView <WAShareAppMessageThumbImagePoolDelegate>

@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) WAShareAppMessageInnerPermanentModel *permanentModel;
@property (retain, nonatomic) WAShareAppMessageInnerTemporaryModel *temporaryModel;
@property (weak, nonatomic) id<WeAppMsgHandleDelegate> msgDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)convertStringToCardType:(id)a0;
+ (unsigned long long)_generateShareTypeWithIsNativeMessage:(BOOL)a0 isWeiShiMessage:(BOOL)a1 isRecordVideoMessage:(BOOL)a2 isURLMessage:(BOOL)a3;

- (void)clearAll;
- (void)willStartShare;
- (void)willStartCustomCallbackShare:(id /* block */)a0;
- (void)shareToCustomCallback:(int)a0 paramsModel:(id)a1;
- (void)shareToSelector:(int)a0 paramsModel:(id)a1;
- (void)shareToFriend:(int)a0 paramsModel:(id)a1;
- (BOOL)registerImageUrl:(id)a0 msgItemType:(int)a1;
- (id)pluginReportPageEvent;
- (void)saveScrollOffsets:(id)a0;
- (void)restoreScrollOffsets:(id)a0;
- (void)takeSnapShotIfNeeded;
- (void)takeSnapShotWithFromTop:(BOOL)a0 completion:(id /* block */)a1;
- (void)registerSnapImage;
- (void)snapshotWebView:(id /* block */)a0;
- (void)cancelSnapshot;
- (void)openWeAppForwardMessage:(id)a0 type:(int)a1 forNativeApp:(BOOL)a2 toContacts:(id)a3 shouldUseDynamicShare:(BOOL)a4;
- (void)notifyToSharePage:(int)a0 shouldUseDynamicShare:(BOOL)a1 customParams:(id)a2 toSpecificContacts:(id)a3;
- (void)notifyToSharePage:(int)a0 shouldUseDynamicShare:(BOOL)a1 customParams:(id)a2 toSpecificContacts:(id)a3 shareCallType:(unsigned long long)a4;
- (void)onCustomWeAppMessage:(id)a0;
- (void)shareDidSuccess:(id)a0;
- (void)shareDidConfirmCancel;
- (void)shareDidError:(id)a0;
- (id)_currentURLToReport;
- (id)getRemoteUrlFromPathOrUrl:(id)a0 appId:(id)a1;
- (void)thumbImagePool:(id)a0 shouldTakeSnapShotWithFromTop:(BOOL)a1 completion:(id /* block */)a2;
- (void)thumbImagePool:(id)a0 didDownloadWebImageDataFinished:(id)a1;
- (unsigned int)getSecFlag;
- (BOOL)isUsernameValidForChatToolAllPageMode:(id)a0;
- (void).cxx_destruct;

@end
