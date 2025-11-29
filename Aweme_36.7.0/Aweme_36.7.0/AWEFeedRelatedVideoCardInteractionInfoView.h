@class UIStackView, NSString, AWEFeedRelatedVideoCardInteractionButton, AWEAwemeModel, UIView, UIViewController;
@protocol AWEAwemePlayInteractionInteractorProtocol, AWECommentListViewControllerProtocol;

@interface AWEFeedRelatedVideoCardInteractionInfoView : UIView <AWEGuestModeMessage, AWEFeedRelatedVideoCardInteractionInfoViewProtocol>

@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedRelatedVideoCardInteractionButton *likeButton;
@property (retain, nonatomic) AWEFeedRelatedVideoCardInteractionButton *commentButton;
@property (retain, nonatomic) AWEFeedRelatedVideoCardInteractionButton *collectButton;
@property (retain, nonatomic) AWEFeedRelatedVideoCardInteractionButton *shareButton;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *backgroundMask;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;
@property (copy, nonatomic) id /* block */ collectBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFromEnterVideo;
@property (nonatomic) BOOL isDCStyle;

- (void)updateCommentCount;
- (void)updateDiggCount;
- (void)bindEvent;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onAwemeFavoriteNotification:(id)a0;
- (void)updateShareCount;
- (void)onCommentAddNotification:(id)a0;
- (void)showCommentPanel;
- (id)themeColorTransformedFrom:(id)a0;
- (void)addMaskView;
- (id)initWithDCStyle:(BOOL)a0;
- (void)onCommentTotalCountNotification:(id)a0;
- (void)onSharePanelDidDismiss:(id)a0;
- (void)updateCollectionCount;
- (void)onCommentDeleteNotification:(id)a0;
- (void)digWithSceneType:(id)a0;
- (void)guestDidDiggAweme:(id)a0 isUndigg:(BOOL)a1;
- (void)digg;
- (void)dismissMaskView;
- (id)composeAdExtraDataFromModel:(id)a0;
- (void)updateLogExtra;
- (void)updateSubviewsIfNeed;
- (void)collectionWithSceneType;
- (void)shareWithSceneType;
- (void)unDigg;
- (void)unfavorite;
- (void)trackForCommentClick;
- (void)updateWithFromPage:(id)a0 logExtra:(id)a1;
- (void)diggForDoubleClick;
- (struct CGSize { double x0; double x1; })iconSize;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)favorite;
- (id)iconColor;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;
- (void)addObservers;

@end
