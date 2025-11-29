@class MMScrollActionSheet, NSMutableDictionary, NSString, GameCenterJsEventInfo;

@interface MMWebViewPlugin_GameShare : MMWebViewPluginBase <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) NSMutableDictionary *dictShareDataForSendAppMessage;
@property (retain, nonatomic) NSMutableDictionary *dictShareDataForShareTimeline;
@property (retain, nonatomic) MMScrollActionSheet *pluginShareActionSheet;
@property (nonatomic) BOOL needUploadFirst;
@property (retain, nonatomic) GameCenterJsEventInfo *currentEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareDataFromShareDataParams:(id)a0;
+ (BOOL)needForceToPortraitWithShareType:(id)a0;
+ (id)shareDataParamsFromShareData:(id)a0;

- (id)init;
- (BOOL)shareCustomShareData2Friend:(id)a0 andCustomShareData2Timeline:(id)a1 andCustomShareButtonData:(id)a2 needUpdateFirst:(BOOL)a3 enableQuickSend:(BOOL)a4 errorMsg:(id *)a5;
- (BOOL)shareCustomShareData2Friend:(id)a0 andCustomShareData2Timeline:(id)a1 andCustomShareButtonData:(id)a2 andCustomOpButtonData:(id)a3 needUpdateFirst:(BOOL)a4 enableQuickSend:(BOOL)a5 errorMsg:(id *)a6;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)doShareWithActionSheetItem:(id)a0 andShareData:(id)a1;
- (void)shareToFriendWithShareData:(id)a0;
- (void)shareToTimeLineWithShareData:(id)a0;
- (void)scrollActionSheetWillDismiss:(id)a0;
- (void)scrollActionSheetDidCancel:(id)a0;
- (void)scrollActionSheetDidTapTransparent:(id)a0;
- (void)reportGameCenterData:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)shareImageToFriendWithShareData:(id)a0;
- (void)shareImageToTimeLineWithImage:(id)a0;
- (void)endWithMessage:(id)a0;
- (void)endWithErrormsg:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void)shareImageToContact:(id)a0 withContact:(id)a1;
- (void)shareImageToContactWithShareData:(id)a0 withContact:(id)a1;
- (void).cxx_destruct;

@end
