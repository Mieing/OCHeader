@class NSString, WAAppIdToUsernameTransfer;

@interface WASessionContentViewController : BaseMsgContentViewController <MsgImgFullScreenViewControllerDelegate, WASessionArrowTitleViewDelegate, WAUINavigationControllerDelegate> {
    WAAppIdToUsernameTransfer *_appIdTransfer;
}

@property (copy, nonatomic) NSString *sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)onBackButtonClicked:(id)a0;
- (void)onWeAppSessionMsgBtnHide;
- (void)onWeAppSessionMsgBtnClick:(id)a0;
- (long long)overrideUserInterfaceStyle;
- (void)headerImageClicked:(id)a0;
- (void)updateTitleAndSubTitleView:(id)a0;
- (id)getWASessionContentDelegate;
- (void)onClickTitle;
- (BOOL)navigationController:(id)a0 shouldUsePresentWhenPushViewController:(id)a1 animated:(BOOL)a2 scene:(unsigned long long)a3;
- (void).cxx_destruct;

@end
