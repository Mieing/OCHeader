@class NSString, MultiTalkJumpAppWordingInfo;

@interface MultiTalkJumpAppMgr : MMUserService <IExptServiceExt, MMServiceProtocol>

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *schemePrefix;
@property (retain, nonatomic) NSString *h5UrlPrefix;
@property (retain, nonatomic) NSString *iconUrlString;
@property (retain, nonatomic) MultiTalkJumpAppWordingInfo *zhCNWordingInfo;
@property (retain, nonatomic) MultiTalkJumpAppWordingInfo *zhHKWordingInfo;
@property (retain, nonatomic) MultiTalkJumpAppWordingInfo *enWordingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)checkAndUpdateData;
- (void)updateWordingInfoFromJsonString:(id)a0;
- (id)getWordingInfo;
- (id)schemeUrlStringWithPositionType:(int)a0;
- (id)htmlUrlStringWithPositionType:(int)a0;
- (id)currentDefaultIconName;
- (id)currentWordingInfoFromExpt;
- (id)getCurrentAppInfo;
- (void)showJumpAppTipsWithInfo:(id)a0 inViewController:(id)a1;
- (void)jumpToAppFromBannerWithInfo:(id)a0 inViewController:(id)a1;
- (void)jumpToAppWithSchemeUrlString:(id)a0 andHtmlUrlString:(id)a1 inViewController:(id)a2 type:(int)a3 positionType:(int)a4;
- (void)openHtmlUrl:(id)a0 inViewController:(id)a1;
- (void)reportBannerViewExposureWithType:(int)a0;
- (void)reportBannerViewClickedWithType:(int)a0;
- (void)reportShowJumpDialogWithType:(int)a0;
- (void)reportCancelJumpDialogWithType:(int)a0;
- (void)reportConfirmJumpDialogWithType:(int)a0;
- (void)reportOpenHtmlWithType:(int)a0 htmlUrlString:(id)a1 andPositionType:(int)a2;
- (void)reportJumpAppWithType:(int)a0 andPositionType:(int)a1;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end
