@class UIView, NSString, UIImage, PHAsset, UILabel, UIImageView, UIButton, NSMutableDictionary, AWEIMHalfScreenContainerViewController, AWEIMChatBackgroundModel, UIActivityIndicatorView, AWEIMUser;
@protocol IESIMToastLoadingProtocol, IESIMConversationProtocol;

@interface AWEIMChatBgPreviewViewController : UIViewController <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *changeMyselfBtn;
@property (retain, nonatomic) UIButton *inviteToChangeBtn;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIView *fakeChatContainerView;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AWEIMChatBackgroundModel *bgModel;
@property (retain, nonatomic) UIView<IESIMToastLoadingProtocol> *loading;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (nonatomic) BOOL isUploading;
@property (retain, nonatomic) NSMutableDictionary *trackParam;
@property (retain, nonatomic) NSString *changeType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isNewBackgroundSetting;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_createContainerView;
- (void)p_createNaviBar;
- (void)p_closeBtnDidClicked:(id)a0;
- (void)p_backBtnDidClicked:(id)a0;
- (BOOL)p_isAbleToChangeOtherForNewBackground;
- (BOOL)p_isAbleToInviteToChange;
- (void)p_changeBgSelfOnly;
- (void)p_inviteToChange;
- (void)p_loadImage;
- (void)p_ChangeBgHalfScreenContainerWillDragToDismiss:(id)a0;
- (void)p_trackWithEvent:(id)a0 otherParams:(id)a1;
- (void)p_trackNewBackgroundWithEvent:(id)a0 otherParams:(id)a1;
- (id)p_getPHImageRequestOptions;
- (void)p_trackPopUpEventWithStatus:(id)a0;
- (void)p_newSetImageShareToPeerUser:(BOOL)a0 backgroundModel:(id)a1;
- (void)p_trackBgSetMonitor:(id)a0;
- (void)p_newUploadImageAndSetImageShareToPeerUser:(BOOL)a0;
- (void)p_uploadImageAndSetImageShareToPeerUser:(BOOL)a0;
- (void)p_setImageToServerShareToPeerUser:(BOOL)a0 imgURI:(id)a1;
- (id)initWithAsset:(id)a0 conversationID:(id)a1 isNew:(BOOL)a2;
- (id)initWithModel:(id)a0 conversationID:(id)a1 isNew:(BOOL)a2;
- (BOOL)isDefaultBackground;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;

@end
