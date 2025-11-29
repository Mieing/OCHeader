@class NSString, IESLiveShareContentModel, UIView, NSMutableArray;
@protocol IESLiveRoomService, IESLiveIMShareContactListProtocol, IESLiveShareService;

@interface IESLiveShareInMoreToolItems : NSObject <IESLiveToolbarComponentHandler, IESLiveIMShareContactListDelegate, IESLiveAudienceMoreToolsAction>

@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveIMShareContactListProtocol> imContactList;
@property (retain, nonatomic) UIView *imListCustomView;
@property (retain, nonatomic) UIView *additionTextView;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *hoverView;
@property (nonatomic) double panelNormalHeight;
@property (nonatomic) double imViewWidth;
@property (retain, nonatomic) IESLiveShareContentModel *shareContentModel;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isCreatingImView;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) BOOL isImKeyboardShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (void)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (void)shareContactList:(id)a0 didSelectRecentShareWithShareModels:(id)a1 atIndex:(long long)a2;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (id)initWithDIContext:(id)a0;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)dismissViewDidTap:(id)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)moreToolsPanelViewDismiss;
- (BOOL)needAppendAdditionTextView:(id)a0 minHeight:(double)a1;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3;
- (void)registerMoreToolHandler;
- (BOOL)enablePreloadShareList;
- (void)preloadImListView;
- (void)createImListCustomView;
- (void)createShareContentModelWithCompletion:(id /* block */)a0;
- (BOOL)canShowShare;
- (void)configCopyItem:(id)a0 completion:(id /* block */)a1;
- (void)configQRCodeItem:(id)a0 completion:(id /* block */)a1;
- (void)configImListVirtualItem:(id)a0 completion:(id /* block */)a1;
- (void)copyLink;
- (void)saveQRCode;
- (void)configShareContentModel:(id)a0;
- (void)trackIMPanelHeadClickWithParams:(id)a0;
- (id)createFakeAvatarView;
- (void).cxx_destruct;
- (void)clearViews;

@end
