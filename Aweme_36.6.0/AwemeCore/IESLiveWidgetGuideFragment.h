@class NSString, HTSLiveToolbarItem, IESLiveWidgetGuideEntryViewModel, UIView, IESLiveWidgetGuideEntryView, IESLiveRightBottomMutuallyExclusiveItem;
@protocol IESLiveUGWidgetGuideService;

@interface IESLiveWidgetGuideFragment : IESLiveRoomComponent <IESLiveFIFAPlayerScaleAction, IESLiveWidgetGuideEntryViewDelegate, IESLiveAutoRotateAction, HTSLiveMessageSubscriber>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) IESLiveWidgetGuideEntryView *entryView;
@property (retain, nonatomic) id<IESLiveUGWidgetGuideService> widgetGuideService;
@property (retain, nonatomic) IESLiveWidgetGuideEntryViewModel *entryViewModel;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) HTSLiveToolbarItem *widgetItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)hadEnterRoom;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)buildCommonParams;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (id)desktopGuideCommonParams;
- (void)trackEventForDesktopGuideShowWithType:(id)a0;
- (void)trackEventForDesktopGuideClickWithType:(id)a0;
- (void)showWidgetGuideView;
- (void)widgetGuideEntryViewCloseAction:(id)a0 autoClose:(BOOL)a1;
- (void)widgetGuideEntryViewAddAction:(id)a0;
- (void)addMorePanelWidgetItemIfNeeded;
- (void)layoutEntryViewForLandscape:(BOOL)a0;
- (void)trackEventForEntryViewClick:(id)a0;
- (void)trackEventForEntryViewShow:(long long)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
