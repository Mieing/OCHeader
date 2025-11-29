@class AWEAwemeModel, NSString, UIView, AWEPageContext, UIButton, NSObject, UIViewController, UILabel, AWEPlayAiToTextPanelViewController;
@protocol AWEAdAvatarView, AWEPlayInteractionContextProtocol, AWEPlayInteractionFavoriteElementViewModelProtocol, AWECommentListViewControllerProtocol, AWEFeedVideoButtonProtocol, AWEPlayInteractionCommentElementViewModelProtocol, AFDFeedVideoButtonProtocol, AWEPlayInteractionShareElementViewModelProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionLikeElementViewModelProtocol, AWEAwemeFeedVideoButtonProtocol;

@interface AWEPlayAiToTextBottomBarView : UIView

@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIView<AWEAdAvatarView> *userAvatarView;
@property (copy, nonatomic) NSString *pageType;
@property (retain, nonatomic) id<AWEPlayInteractionLikeElementViewModelProtocol> likeViewModel;
@property (retain, nonatomic) NSObject<AWEPlayInteractionFavoriteElementViewModelProtocol> *favViewModel;
@property (retain, nonatomic) id<AWEPlayInteractionShareElementViewModelProtocol> shareViewModel;
@property (retain, nonatomic) id<AWEPlayInteractionCommentElementViewModelProtocol> commentViewModel;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *commentButton;
@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *likeButton;
@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *favoriteButton;
@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *shareButton;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) AWEPlayAiToTextPanelViewController *panelViewController;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;

- (void)onThemeChanged;
- (BOOL)alertIfNotValidForAction:(long long)a0;
- (void)onUserAvatarClicked:(id)a0;
- (void)bindEvent;
- (void)onAwemeFavoriteNotification:(id)a0;
- (void)announceAccessibility:(id)a0;
- (void)onCommentAddNotification:(id)a0;
- (void)addMaskView;
- (void)onCommentTotalCountNotification:(id)a0;
- (void)onCommentDeleteNotification:(id)a0;
- (void)setInteractActions;
- (void)makeConstraintInsideButton:(id)a0;
- (void)updateLikeButtonUI;
- (void)updateFavoriteButtonUI;
- (void)dismissMaskView;
- (void)doCollectedAction;
- (void)doShareAction;
- (void)doDiggAction;
- (void)doCommentAction;
- (void)dismissMaskViewOntouch:(id)a0;
- (void)updateCommentCountInAITextPanel;
- (id)getInteractVideoProgress;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (void)addObservers;

@end
