@class NSString, NSMutableArray;
@protocol AWEIMLiveTypeMessageViewModelProtocol;

@interface AWEIMLiveMessageAutoPlayInteractor : AWEIMComponentBase <AWEIMInputVIewControllerAction, AWEIMMessageTableViewAction, AWEIMLiveMessageAutoPlayInteractorInterface>

@property (retain, nonatomic) id<AWEIMLiveTypeMessageViewModelProtocol> playingVM;
@property (retain, nonatomic) NSMutableArray *liveViewModelCache;
@property (nonatomic) struct CGSize { double width; double height; } preContentSize;
@property (nonatomic) BOOL hasAddFloatToFullModeHandler;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWithCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)inputViewTypeDidChange:(long long)a0 oldInputViewType:(long long)a1;
- (void)tableViewAllDidEndScroll:(id)a0;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (void)p_viewDidAppear;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (id)vcParent;
- (void)addLiveViewModel:(id)a0;
- (void)removeLiveViewModel:(id)a0;
- (void)tryAutoPlayShareLive;
- (void)stopShareLive;
- (void)inputViewTypeDidChange:(long long)a0;
- (void)didEndScrollWithTableView:(id)a0;
- (void)handleApplicationWillResignActiveNty:(id)a0;
- (void)handleApplicationDidBecomeActiveNty:(id)a0;
- (void)__tryResetPlayShareLiveByViewChange;
- (void)__addFloatToFullModeHandler;
- (void)__resetPlayShareLive;
- (BOOL)__canPlayByVisibleSizeForVM:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)conversation;

@end
