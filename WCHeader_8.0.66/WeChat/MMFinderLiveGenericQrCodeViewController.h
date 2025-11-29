@class MMUIButton, WCForwardViewController, UILabel, MMFinderLiveTaskId, FinderLiveShareLiveQRCodeInfo, UIView, NSString, MMFinderLiveGenericQrCodeView, MMFinderLiveNoticePosterModel, MMFinderLivePosterEditPanel, MMScrollActionSheet, ForwardMessageLogicController, WCFinderContact;

@interface MMFinderLiveGenericQrCodeViewController : MMCPUIViewController <MMFinderLiveGenericQrCodeViewDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, MMFinderLivePosterEditPanelDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo;
@property (retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel;
@property (retain, nonatomic) NSString *selectedStyleId;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIView *editorLandingStateCommandsContainer;
@property (retain, nonatomic) MMUIButton *shareToFriendButton;
@property (retain, nonatomic) UILabel *editStyleLabel;
@property (retain, nonatomic) UIView *editingStateCommandsContainer;
@property (retain, nonatomic) MMFinderLivePosterEditPanel *posterEditPanel;
@property (retain, nonatomic) MMFinderLiveGenericQrCodeView *qrCodeView;
@property (retain, nonatomic) MMScrollActionSheet *shareActionSheet;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) WCForwardViewController *forwardVc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)liveTask;
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)a0 contact:(id)a1 completionBlock:(id /* block */)a2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)onShareButtonTapped;
- (void)onAdvanceStyleButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onEnterEditingButtonTapped;
- (void)onEditImageButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void)onBackButtonTapped;
- (void)actionSheet:(id)a0 willDismissWithButtonIndex:(long long)a1;
- (void)onPosterEditPanelEditImage;
- (void)onPosterEditPanelCommitEdit;
- (void)onPosterEditPanelSelectStyle:(long long)a0;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)initializeComponents;
- (void)initializeShareActionSheet;
- (void)shareToChat:(id)a0;
- (void)shareToMoment;
- (void)addToFavorites;
- (void)commitPosterChangesWithCompletionBlock:(id /* block */)a0;
- (void)revertPosterChangesWithCompletionBlock:(id /* block */)a0;
- (void)setPreviewBackgroundImage:(id)a0 completionBlock:(id /* block */)a1;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)a0;
- (void)reportAnchorShareAction;
- (void).cxx_destruct;

@end
