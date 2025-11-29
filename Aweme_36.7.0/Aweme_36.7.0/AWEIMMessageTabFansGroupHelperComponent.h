@class AWEButton, AWEIMMessageTabNaviPlusButtonModel, NSString;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabPlusButtonInterface;

@interface AWEIMMessageTabFansGroupHelperComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWEIMMessageTabFansGroupHelperInterface, IESIMPopoverDelegate>

@property (retain, nonatomic) AWEButton *barFansGroupHelperButton;
@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonInterface> plusButtonService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (retain, nonatomic) AWEIMMessageTabNaviPlusButtonModel *buttonModelForTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)popoverDidAppear:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (BOOL)canShowEntryView;
- (id)p_titleString;
- (void)p_trackButtonClick:(id)a0;
- (void)p_didClickHelperButton;
- (void)p_trackButtonShow:(id)a0;
- (void)p_showGuideTipIfNeed:(id)a0;
- (id)p_getGuideTipKey;
- (void)p_trackFansGroupHelperClicked;
- (void)p_transferToFansGroupHelper;
- (id)p_commonTrackPrams:(id)a0;
- (void).cxx_destruct;

@end
