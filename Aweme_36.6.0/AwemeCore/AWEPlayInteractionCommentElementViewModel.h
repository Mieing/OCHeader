@class AWEPlayInteractionViewController, NSString, AWEPlayInteractionCommentPanelModel, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionCommentElementViewModel : AWEPlayInteractionBaseElementViewModel <AWEPlayInteractionCommentElementViewModelProtocol>

@property (copy, nonatomic) NSString *totolCountChange;
@property (nonatomic) BOOL hadClickedCommentButton;
@property (retain, nonatomic) AWEPlayInteractionCommentPanelModel *panelModel;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long commentCount;
@property (weak, nonatomic) AWEPlayInteractionViewController *viewController;
@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)dealloc;
- (void)updateCommentCount;
- (void)onCommentButtonClicked:(id)a0;
- (void)onCommentAddNotification:(id)a0 completion:(id /* block */)a1;
- (void)onCommentDeleteNotification:(id)a0 completion:(id /* block */)a1;
- (void)onCommentTotalCountNotification:(id)a0 completion:(id /* block */)a1;
- (void)onCommentAddNotification:(id)a0;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)onCommentTotalCountNotification:(id)a0;
- (void)onCommentDeleteNotification:(id)a0;
- (void)interactor_onCommentButtonClicked:(id)a0;
- (void)showCommentSplitScreen;
- (BOOL)isAdCommentCountShow;
- (BOOL)shouldBeReplacedInMoment;
- (BOOL)alertIfCanNotComment;
- (BOOL)shouldExecOnCommentButtonClicked;
- (void)trackOtherClickComment;
- (void)trackForbidCommentToastShow:(id)a0;
- (void)vitalizeShareOrderButton;
- (void)updateTagsView;
- (void)updateDynamicLabel;
- (void)__trackHotCommentIconShow;
- (void).cxx_destruct;
- (id)init;

@end
