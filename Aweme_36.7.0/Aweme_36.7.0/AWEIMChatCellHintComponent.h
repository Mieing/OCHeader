@class UIFont, AWEIMChatCellHintViewModel, AWEIMChatCellHintModel, IESIMReadStateDisplayTrackModel, NSString, NSObject;
@protocol AWEIMChatListHintProviderCellInterface, AWEIMChatCellMessageStateInterface, AWEIMChatListHintReloadHintInterface, AWEIMChatCellHintComponentAction, OS_dispatch_semaphore;

@interface AWEIMChatCellHintComponent : AWEIMChatCellComponentBase <AWEIMChatCellHintComponentInterface, IESIMReadStateDisplayTrackDelegate>

@property (retain, nonatomic) UIFont *hintFont;
@property (retain, nonatomic) AWEIMChatCellHintModel *displayingHintModel;
@property (retain, nonatomic) AWEIMChatCellHintViewModel *hintVM;
@property (weak, nonatomic) id<AWEIMChatListHintProviderCellInterface> hintProviderService;
@property (weak, nonatomic) id<AWEIMChatListHintReloadHintInterface> reloadHintService;
@property (weak, nonatomic) id<AWEIMChatCellHintComponentAction> hintAction;
@property (retain, nonatomic) IESIMReadStateDisplayTrackModel *readStateTrackModel;
@property (weak, nonatomic) id<AWEIMChatCellMessageStateInterface> messageStateService;
@property (nonatomic) BOOL enableReadStateDisplayTrack;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) BOOL presenterHasBindView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)dealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)onCellPrepareReuseForCurrentViewModel;
- (BOOL)hintIsCompatibleWithMention;
- (BOOL)hintIsCompatibleWithTimeText;
- (BOOL)hintIsCompatibleWithSnapShot;
- (void)reloadHintType:(unsigned long long)a0;
- (void)onCellDidClick:(id)a0;
- (void)p_setupReadStateTracker;
- (void)p_checkReadStateDisplayedOnScreen;
- (void)p_trackReadStateDisplayIfNeed;
- (BOOL)shouldTrackForDelayMessage:(id)a0;
- (void)__updatePresenter;
- (void)__observeVM;
- (void)__updateDisplayHintModel:(id)a0 oldHintModel:(id)a1;
- (void).cxx_destruct;

@end
