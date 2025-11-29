@class AWESearchEventDispather, AWESearchCardCommentModel, NSString, AWESearchCardCommentButton, NSDictionary, NSMutableArray, UIViewController;
@protocol AWEAwemePlayInteractionInteractorProtocol, AWESearchContainerProtocol, AWECommentListViewControllerProtocol, AWESearchComponentProtocol;

@interface AWESearchCardCommentComponent : AWESearchComponent <AWECommentControlVideoStateProtocol, AWESearchCardCommentComponentProvider>

@property (retain, nonatomic) AWESearchCardCommentModel *model;
@property (retain, nonatomic) AWESearchCardCommentButton *commentButton;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL commentVCHasShown;
@property (nonatomic) BOOL lazyLoadCommentVC;
@property (nonatomic) BOOL hasLoadCommentVCDuringSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidEndShowing;
- (void)componentViewLayoutSubviews;
- (void)componentViewPrepareForReuse;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)accessibilityElementsArr;
- (void)showCommentViewController;
- (void)updateInteractor;
- (void)p_loadCommentVCIfNeed;
- (id)buildCommentViewController;
- (BOOL)enableCommentTrackParamsFix;
- (void)setupTransmissionInfoWithCommentVC:(id)a0;
- (void)addSearchParamsWithParams:(id)a0 commentVC:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;

@end
