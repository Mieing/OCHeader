@class NSString, NSArray, HTSLiveToolbarItem, HTSLiveGestureStickersViewModel, UILabel, IESLiveGestureStickerPopupView, NSMutableDictionary;

@interface HTSLiveGestureStickerFragment : IESLiveRoomComponent <IESLiveGestureStickerPopupViewDelegate, IESLiveGestureStickerRouter>

@property (nonatomic) BOOL hasFirstShow;
@property (weak, nonatomic) HTSLiveToolbarItem *stickerItem;
@property (copy, nonatomic) id /* block */ hiddenBlock;
@property (weak, nonatomic) UILabel *tipView;
@property (retain, nonatomic) HTSLiveGestureStickersViewModel *viewModel;
@property (retain, nonatomic) IESLiveGestureStickerPopupView *popupView;
@property (nonatomic) BOOL observerBinded;
@property (retain, nonatomic) NSArray *currentGestures;
@property (retain, nonatomic) NSMutableDictionary *gestureUseTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTrackContext:(id)a0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)showEntrance;
- (void)bindObservers;
- (void)loadToolbarItem;
- (BOOL)isGuestureEnabled;
- (void)changeActivityMagicGestureStatusWithMessage:(id)a0;
- (long long)currentMagicGestureState;
- (void)useMagicGestureWithEffectId:(id)a0;
- (void)removeMagicGestureWithEffectId:(id)a0;
- (void)applyGestureStickersIfNeeded;
- (void)showTipViewWithTip:(id)a0;
- (void)downloadEffectsList;
- (void)fetchLastSelectedGestures;
- (void)showGestureStickerView;
- (void)showNewGesturePopupView;
- (id)makeTipViewWithTip:(id)a0;
- (BOOL)fansGroupGuideDisabled;
- (void)trackGestureUseSuccess;
- (void)trackGestureUseTimeWithGestureIds:(id)a0;
- (void)gestureStickerViewNeedToRetry:(id)a0;
- (void)gestureStickerView:(id)a0 needToShowTip:(id)a1;
- (void)hideTipView;
- (void).cxx_destruct;

@end
