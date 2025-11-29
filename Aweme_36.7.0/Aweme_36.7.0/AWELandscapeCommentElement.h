@class AWELandScapeCommentButton, UIViewController, NSString;
@protocol AWECommentListViewControllerProtocol;

@interface AWELandscapeCommentElement : AWELandscapeInteractionBaseElement <AWECommentControlVideoStateProtocol>

@property (retain, nonatomic) AWELandScapeCommentButton *commentButton;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)hideAllPanels;
- (void)onCommentAddNotification:(id)a0;
- (void)onCommentTotalCountNotification:(id)a0;
- (void)onCommentDeleteNotification:(id)a0;
- (void)trackClickCommentButton;
- (void)handleClickCommentButton;
- (BOOL)isShowingPanel;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;
- (void)dealloc;

@end
