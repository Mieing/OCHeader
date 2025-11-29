@class AWEChapterContext, NSString, UIImpactFeedbackGenerator, UIViewController;
@protocol AWEAwemePlayInteractionInteractorProtocol, AWECommentListViewControllerProtocol;

@interface AWEChapterPanelViewModel : NSObject <AWECommentControlVideoStateProtocol>

@property (retain, nonatomic) AWEChapterContext *pageContext;
@property (weak, nonatomic) UIViewController *container;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL isPausedByComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)addNotification;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onAwemeFavoriteNotification:(id)a0;
- (void)onCommentAddNotification:(id)a0;
- (void)onCommentTotalCountNotification:(id)a0;
- (void)onCommentDeleteNotification:(id)a0;
- (id)initWithContext:(id)a0 container:(id)a1;
- (void)onShareChapterButtonTapped:(id)a0 chapterIndex:(long long)a1;
- (void)diggButtonAction:(id)a0;
- (void)commentButtonAction:(id)a0;
- (void)collectionButtonAction:(id)a0;
- (void)avatarImageViewAction:(id)a0;
- (void)nickLabelAction:(id)a0;
- (void)showSuccessShareVideoNoticeTip:(id)a0;
- (void)executeScaleAnimation:(id)a0;
- (void)goUserProfileWithEnterMethod:(id)a0;
- (id)userProfileViewController:(id)a0;
- (id)model;
- (void).cxx_destruct;
- (void)shareButtonAction:(id)a0;

@end
