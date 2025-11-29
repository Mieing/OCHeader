@class NSString;
@protocol AFDSkylightMomentListControllerProtocol, AFDMomentColorRingInfoProtocol, AFDCloseFriendsColorRingBubbleDisplayStrategyProtocol;

@interface AFDSkylightCellTopBubbleComponent : AFDSkylightBaseComponent <AWEIMSkylightCellComponentEvent, AWEIMSkylightCellMomentComponentEvent, AFDSkylightMomentMessage>

@property (weak, nonatomic) id<AFDSkylightMomentListControllerProtocol> listController;
@property (retain, nonatomic) id<AFDMomentColorRingInfoProtocol> momentColorRingInfo;
@property (retain, nonatomic) id<AFDCloseFriendsColorRingBubbleDisplayStrategyProtocol> strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (void)componentDidMounted:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)reloadUI;
- (id)bubbleManager;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)willBackFromMoment;
- (void)onReceiveColorRingChangeNotification:(id)a0;
- (void)didClickOthersColorRingWithUid:(id)a0;
- (BOOL)isHaveNotes;
- (void)onRemindBubbleTimerFired;
- (void)reloadDataWithShouldUpdateSize:(BOOL)a0;
- (void)onBubbleViewTapped;
- (void)showRemindBubbleIfNeeded;
- (void)showOneBubbleWithAnimation:(BOOL)a0;
- (void)hideCurrentBubbleWithAnimation:(BOOL)a0;
- (void)showBubbleWhenColorRingChanged;
- (BOOL)isRemindBubbleShowing;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;

@end
