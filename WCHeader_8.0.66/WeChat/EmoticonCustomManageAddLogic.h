@class NSString, NSMutableDictionary, MMSnackBar, StoreEmotionExchangeEmotionPackCgi, NSMutableArray;
@protocol EmoticonCustomManageAddLogicDelegate, MMUIViewControllerDelegate;

@interface EmoticonCustomManageAddLogic : MMObject <StoreEmotionExchangeEmotionPackCgiDelegate, EmoticonBackupOperateMgrExt, EmoticonDescMgrExt> {
    BOOL m_isAdding;
    BOOL m_isExchanging;
    BOOL m_isJustExchange;
    NSMutableArray *m_emoticonWraps;
    NSMutableArray *m_existWraps;
    NSMutableArray *m_emoticonMd5s;
    NSMutableDictionary *m_emoticonComplete;
    NSString *m_editSessionId;
    StoreEmotionExchangeEmotionPackCgi *m_exchangePackCgi;
}

@property (retain, nonatomic) MMSnackBar *snackBar;
@property (nonatomic) BOOL hasExistedWrapWhenAdd;
@property (readonly, nonatomic) BOOL isAdding;
@property (retain, nonatomic) NSString *loadingText;
@property (weak, nonatomic) id<MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate> delegate;
@property (nonatomic) BOOL newSnackStyle;
@property (nonatomic) BOOL disableAutoShowSucToast;
@property (nonatomic) unsigned long long totalEditCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeNumberForImageData:(id)a0;

- (id)init;
- (BOOL)checkTotalCountLimitWithType:(unsigned long long)a0;
- (BOOL)startAddEmoticonWithWrap:(id)a0;
- (BOOL)startAddEmoticonWithWraps:(id)a0;
- (BOOL)startExchangePackAndAddEmoticonWithWrap:(id)a0;
- (BOOL)startAddEmoticonWithWraps:(id)a0 NeedCheckTotalCountLimit:(BOOL)a1;
- (BOOL)startExchangePackForSendingWithWrap:(id)a0;
- (BOOL)cancelAddEmoticonWithWrap:(id)a0;
- (void)showSavedTips;
- (void)showExtendLimitTipsWithWording:(id)a0 ofEmoticonType:(unsigned long long)a1;
- (void)showComfirmTipsWithWording:(id)a0;
- (void)showJumpDetailTipsWithWording:(id)a0;
- (void)tryDownloadThumbImage:(id)a0;
- (void)showLoadingSnackBar;
- (void)showSavedSnackBar;
- (void)hideSnackBar;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)a0 DownloadInfo:(id)a1;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)a0;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)a0 AndRet:(int)a1 ErroMsg:(id)a2;
- (void)onAddBackupEmoticonPendingUpload:(id)a0;
- (void)onAddBackupEmoticonOK:(id)a0 addEmoticonWrap:(id)a1;
- (void)onAddBackupEmoticonFailed:(id)a0 reason:(unsigned long long)a1 remoteErrMsg:(id)a2;
- (void)hideSnackBarIfNeed;
- (void)stickyAfterAddedIfNeed;
- (void)onStickyBackupEmoticonOK:(id)a0 needDealVc:(BOOL)a1;
- (void)onStickyBackupEmoticonFailed:(id)a0 needDealVc:(BOOL)a1;
- (void).cxx_destruct;

@end
