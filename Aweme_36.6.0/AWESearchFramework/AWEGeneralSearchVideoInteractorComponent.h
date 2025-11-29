@class AWEAwemeModel, UIView, NSString, NSDictionary, NSMutableArray, AWESearchEventDispather, AWESearchCardInteractorModel, AWEGeneralSearchVideoCardModel;
@protocol AWESearchComponentProtocol, AWESearchCardInteractorComponentProvider, AWESearchContainerProtocol;

@interface AWEGeneralSearchVideoInteractorComponent : AWESearchComponent <AWEGeneralSearchVideoInteractorProvider>

@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchCardInteractorModel *interactorModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<AWESearchCardInteractorComponentProvider> interactorComponent;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)configInteractorModelWith:(id)a0 width:(double)a1;

- (void)updateAwemeModel:(id)a0;
- (BOOL)shouldAddSearchParamsInShareVideoTrack;
- (id)getIronManModuleService;
- (void)componentDidLoad;
- (id)playerProvider;
- (id)commentLogExtra;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (id)receiveProtocolList;
- (void)trackIronMan_comment_top;
- (void)setModelOnly:(id)a0;
- (id)accessibilityElementsArr;
- (id)coCreateTrackParams;
- (void)onAwemeFamiliarRecommendStatusChangedNotification:(id)a0;
- (void)updateInteractorModel;
- (id)configCommonLogExtra;
- (id)getInteractElementBtmDcmInfo:(long long)a0;
- (id)p_containerContext;
- (id)descProvider;
- (void)updateDiggInfoIfDigg:(BOOL)a0;
- (BOOL)disableActionWithShareModel:(id)a0;
- (void)willActionWithShareModel:(id)a0;
- (BOOL)disableActionWithFavorModel:(id)a0;
- (void)didUpdateFavorStateWithModel:(id)a0;
- (BOOL)disableActionWithCommentModel:(id)a0;
- (void)willActionCommentModel:(id)a0;
- (void)commentPanelDidShow:(id)a0 isFirstShow:(BOOL)a1;
- (void)commentSeekPlayerTimeWithJumpTime:(double)a0 jumpTimeStr:(id)a1;
- (BOOL)commentPauseVideoIfPlaying;
- (BOOL)commentRecoverPlayIfPauseByComment;
- (BOOL)disableActionWithDiggModel:(id)a0;
- (void)willActionDiggModel:(id)a0;
- (void)actionDiggWithDiggModel:(id)a0;
- (void)actionUndiggWithDiggModel:(id)a0;
- (void)didUpdateDiggStateWithModel:(id)a0;
- (id)interactor;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;

@end
