@class AWEEcomAISearchSwitchPromptView, NSString, UIImageView, NSTimer, UIView, AWEEcomAISearchResultViewModel, UIButton;

@interface AWEEcomAISearchBarView : AWEEcomSearchBarView <AWEEcomAISearchSwitchPromptViewDelegate>

@property (retain, nonatomic) UIButton *aiReturnButton;
@property (retain, nonatomic) UIButton *aiSearchButton;
@property (retain, nonatomic) UIButton *aiScanOrPhotoButton;
@property (retain, nonatomic) AWEEcomAISearchSwitchPromptView *switchPromptView;
@property (retain, nonatomic) UIButton *aiSRPEntrance;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) UIImageView *searchBarLeftImageView;
@property (nonatomic) long long preShowState;
@property (retain, nonatomic) NSTimer *promptWordExitTimer;
@property (nonatomic) BOOL showMiddleAISwitchEventReported;
@property (nonatomic) BOOL showSRPAIEntranceEventReported;
@property (nonatomic) BOOL exitSwitchPromptWordImmediately;
@property (nonatomic) BOOL isSwitchPromptFirstDidAppear;
@property (nonatomic) long long showState;
@property (retain, nonatomic) AWEEcomAISearchResultViewModel *aiSearchViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchButtonClicked:(id)a0;
- (BOOL)isAISearchOn;
- (void)beginTimer;
- (void)trackShowMiddleAISwitchEvent;
- (void)setupNewUIStructure;
- (BOOL)enterSRPByHideMiddlePage;
- (void)setupUIForShowStateOldStyle;
- (double)aiSearchBarLeftMargin;
- (void)updateAISearchBarAppearance;
- (BOOL)aiSRPEntranceShowing;
- (void)forceSRPBackgroundColorTransparent;
- (void)trackShowSRPAIEntranceEvent;
- (void)updateSevenPageReturnButton:(BOOL)a0;
- (void)switchPromptWordCollapseImmediatelyIfNeeded;
- (void)aiSearchButtonTap:(id)a0 btm:(id)a1;
- (void)trackClickSRPAIEntranceEvent;
- (void)showAISearchSRPWithAliveAiSearchViewModel;
- (void)clearTextButtonClicked:(id)a0;
- (void)trackClickMiddleAISwitchEvent;
- (id)eventSRPAIEntranceCommonParams;
- (void)searchBarViewTransitionToAIExpandScene;
- (void)searchBarViewTransitionToSRPScene;
- (void)aiSRPEntranceButtonClicked:(id)a0;
- (void)updateAISearchBarViewIsAISearchOnState:(BOOL)a0;
- (void)switchPromptShowStateDidChange:(long long)a0;
- (void)initAISearchBarShowState:(long long)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)invalidateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)dealloc;
- (void)setupViews;

@end
