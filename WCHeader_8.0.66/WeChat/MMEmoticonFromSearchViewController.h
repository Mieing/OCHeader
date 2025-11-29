@class UIView, NSString, MMWebImageView, EmoticonCustomManageAddLogic, UIButton, MMSearchEmotWrap, MMEmoticonView, UILabel, MMUIActivityIndicatorView;

@interface MMEmoticonFromSearchViewController : MMUIViewController <IStoreEmotionSingleDownloadMgrExt, EmoticonCustomManageAddLogicDelegate, IStoreEmotionDesignerInfoMgrExt, WCActionSheetDelegate> {
    MMSearchEmotWrap *m_emotWrap;
    UIView *m_emotContentView;
    MMUIActivityIndicatorView *m_activityIndicatorView;
    MMEmoticonView *m_emotView;
    UIButton *m_saveBtn;
    UIButton *m_sendBtn;
    BOOL m_isEmotExpand;
    BOOL m_isAnimating;
    UIButton *m_operateButton;
    UILabel *m_operatePrefixLabel;
    UILabel *m_operateTitleLabel;
    MMWebImageView *m_operateThumbView;
    int m_internalStatus;
    EmoticonCustomManageAddLogic *m_emoticonAddLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmojiWrap:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)initTitleArea;
- (void)initView;
- (void)initOperateContent;
- (void)initEmotContent;
- (void)layoutEmotContent;
- (void)initEmotData;
- (void)jumpEmotStore;
- (void)jumpEmotDesiger;
- (void)jumpSourceWebView;
- (void)jumpWeappProfile;
- (void)jumpBrandProfile;
- (id)getOperateImgUrlStr;
- (id)getOperateTitle;
- (BOOL)isStoreEmoticon;
- (BOOL)isCustomEmoticon;
- (BOOL)shouldDisplayOperateContent;
- (BOOL)shouldDisplayOperateImageView;
- (BOOL)isOperateContentClickable;
- (BOOL)isWeappOperateContent;
- (BOOL)isBrandOperateContent;
- (void)doubleTapEmotView:(id)a0;
- (void)doAddEmot;
- (void)doForwardEmot;
- (void)doExchangeProcess;
- (void)doAddEmotReport;
- (void)doSendEmotReport;
- (void)reportViewDisplay;
- (void)reportEmotOperationForSearch:(int)a0;
- (void)reportPageLaunch;
- (unsigned int)currentLaunchType;
- (void)setButton:(id)a0 enable:(BOOL)a1;
- (void)onAddEmot:(id)a0;
- (void)onSendEmot:(id)a0;
- (void)onSaveEmot:(id)a0;
- (void)onExposeEmot:(id)a0;
- (void)onOperate:(id)a0;
- (void)onReturn;
- (void)onMore:(id)a0;
- (void)onDownloadCustomEmoticonFinishWithData:(id)a0;
- (void)onDownloadCustomEmoticonFail;
- (void)AddEmoticonFinishedWithWrap:(id)a0 IsSuccessed:(BOOL)a1;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)a0 isSuccessed:(BOOL)a1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void)onGetDesignerForDesignerId:(id)a0 AndDesigner:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
