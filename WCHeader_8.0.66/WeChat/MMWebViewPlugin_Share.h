@class NSString, NSMutableDictionary, MMScrollActionSheet;

@interface MMWebViewPlugin_Share : MMWebViewPluginBase <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *dictShareDataForSendAppMessage;
@property (retain, nonatomic) NSMutableDictionary *dictShareDataForShareTimeline;
@property (retain, nonatomic) MMScrollActionSheet *pluginShareActionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShareAppMessageWithUpdateShareData:(id)a0;
+ (id)shareDataParamsFromShareData:(id)a0;
+ (id)shareDataFromShareDataParams:(id)a0;
+ (BOOL)needForceToPortraitWithShareType:(id)a0;

- (id)init;
- (void)updateSendAppMessageShareData:(id)a0 forCurrentUrl:(id)a1;
- (void)updateTimelineShareData:(id)a0 forCurrentUrl:(id)a1;
- (void)doUpdateShareData:(id)a0 forCurrentUrl:(id)a1 inDictionary:(id)a2;
- (id)getWebViewControllerShareData:(id)a0;
- (id)appMessageShareDataParamsFromCurrentUrl:(id)a0;
- (id)timelineShareDataParamsFromCurrentUrl:(id)a0;
- (BOOL)shareCustomShareData2Friend:(id)a0 andCustomShareData2Timeline:(id)a1 andCustomShareButtonData:(id)a2 errorMsg:(id *)a3;
- (BOOL)shareCustomShareData2Friend:(id)a0 andCustomShareData2Timeline:(id)a1 andCustomShareButtonData:(id)a2 andCustomOpButtonData:(id)a3 errorMsg:(id *)a4;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetWillDismiss:(id)a0;
- (void)scrollActionSheetDidCancel:(id)a0;
- (void)scrollActionSheetDidTapTransparent:(id)a0;
- (void)reportGameCenterData:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void).cxx_destruct;

@end
