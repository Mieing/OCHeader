@class UIView, NSString, CMessageWrap, UIButton, MMImageBrowseView, EmoticonCustomAddLogicController, WCActionSheet, MMUIActivityIndicatorView;

@interface AppEmoticonPreviewViewController : MMUIViewController <WCActionSheetDelegate, MMImgageBrowseViewDelegate, IAPPEmoticonDownloadExt, EmoticonCustomAddLogicControllerDelegate, IMsgRevokeExt> {
    MMImageBrowseView *m_imageView;
    UIButton *m_srcBtn;
}

@property (retain, nonatomic) UIView *_bkgView;
@property (retain, nonatomic) WCActionSheet *m_actionSheet;
@property (retain, nonatomic) EmoticonCustomAddLogicController *addEmoticonLogic;
@property (retain, nonatomic) MMUIActivityIndicatorView *smallLoadingView;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) id singleTapOnNav;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)launch:(id)a0;
- (void)onSwipeRightNavigationButton:(id)a0;
- (void)onReturn;
- (void)onOperate:(id)a0;
- (void)addBackgroundView;
- (void)viewDidLoad;
- (void)addSmallLoadingView;
- (void)removeSmallLoadingView;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initDownloadedView;
- (void)updateEmoticonView;
- (void)initFromSourceButton;
- (void)onSaveEmoticon:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showStatusBar;
- (void)onSingleTapOnNavigationBar:(id)a0;
- (void)addNvGestureRecognizer;
- (void)removeNvGestureRecognizer;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillBeInteractivePoped;
- (void)setFullScreen:(BOOL)a0;
- (void)onSingleTapImageBrowseView;
- (void)onImageBrowseViewDidZoom;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void)onAppEmoticonDownloadFinished:(id)a0;
- (void).cxx_destruct;

@end
