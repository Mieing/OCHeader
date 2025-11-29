@class NSString, AWEGeneralSearchVideoCardModel, AWEAwemeModel, UIView, AWEModernFeedActionPanelView;

@interface AWESearchVideoCardInteractorComponent : AWESearchComponent <AWESearchVideoCardInteractorComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEModernFeedActionPanelView *actionPanelView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })reCalculateSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;
+ (id)realAwemeWithAweme:(id)a0;

- (void)updateDiggCount;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onAwemeFavoriteNotification:(id)a0;
- (void)updateAwemeModel:(id)a0;
- (void)showNewPressPanelForScene:(id)a0;
- (id /* block */)shareConfigurationHandler;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void)p_loadView;
- (BOOL)shouldAddSearchParamsInShareVideoTrack;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (id)playerProvider;
- (void)doSafeDigg:(BOOL)a0 enterMethod:(id)a1 ignoreUnlogin:(BOOL)a2 animationBlock:(id /* block */)a3;
- (void)updateFavoriteCount;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)doSafeDigg:(BOOL)a0 enterMethod:(id)a1;
- (void)likeVideoClickAction;
- (void)favoriteButtonClickActionWithButton:(id)a0;
- (void)shareVideoClickAction;
- (void)p_createComponent;
- (void)showSharePanel;
- (void)setModelOnly:(id)a0;
- (id)accessibilityElementsArr;
- (void)repostButtonClickAction;
- (void)handleSearchPictureWithConfig:(id)a0;
- (void)onAwemeFamiliarRecommendStatusChangedNotification:(id)a0;
- (id)p_containerContext;
- (id)descProvider;
- (void)updateDiggInfoIfDigg:(BOOL)a0;
- (void)doSafeFavoriteWithButton:(id)a0;
- (id)commentProvider;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)p_layoutContents;
- (id)p_getInteractElementBtmDcmInfo:(long long)a0;
- (id)outCommentLogExtra;
- (id)longpressPanelComponent;
- (id)interactor;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (id)router;
- (void)addObservers;

@end
