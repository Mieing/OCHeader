@class IESLiveGiftPanelNonClipViewContainer, UIStackView, IESLiveGiftDynamicPanelTopModeStore, UIView, NSString, UIImageView, NSDictionary, IESLiveNewGiftPanelItemBuilder;
@protocol IESLiveGiftPanelViewModelProtocol, HTSLiveSmallGiftAction, IESLiveGiftListActions;

@interface IESLiveNewGiftPanelView : IESLiveGiftCheckWindowView <UIGestureRecognizerDelegate, IESLiveAutoRotateAction, IESLiveGiftPanelViewProtocol>

@property (nonatomic) double aboveComponentHeight;
@property (nonatomic) double smallGiftOffset;
@property (copy, nonatomic) NSDictionary *giftPanelAnimationDurationConfig;
@property (retain, nonatomic) IESLiveGiftPanelNonClipViewContainer *nonClipViewContainer;
@property (retain, nonatomic) id<IESLiveGiftPanelViewModelProtocol> viewModel;
@property (retain, nonatomic) id<IESLiveGiftPanelViewModelProtocol> searchPanelViewModel;
@property (retain, nonatomic) IESLiveNewGiftPanelItemBuilder *itemBuilder;
@property (retain, nonatomic) IESLiveNewGiftPanelItemBuilder *searchBuilder;
@property (retain, nonatomic) IESLiveGiftDynamicPanelTopModeStore *topModeStore;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIStackView *topContainer;
@property (retain, nonatomic) UIStackView *middleContainer;
@property (retain, nonatomic) UIStackView *bottomContainer;
@property (retain, nonatomic) UIStackView *searchContainer;
@property (retain, nonatomic) UIView *safeAreaView;
@property (weak, nonatomic) id<HTSLiveSmallGiftAction> smallGiftDispatcher;
@property (weak, nonatomic) id<IESLiveGiftListActions> giftListDispatcher;
@property (nonatomic) BOOL onSearch;
@property (nonatomic) BOOL searchEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ onHideBlock;
@property (copy, nonatomic) id /* block */ onWillShowBlock;
@property (copy, nonatomic) id /* block */ onSearchBlock;

- (double)panelHeight;
- (void)didSetAttachingDIContext;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)resizeIpadPanelIfNeed;
- (void)showPanel;
- (void)hidePanel:(BOOL)a0 source:(long long)a1;
- (void)updateGiftPanelWithRecipients:(id)a0 allMic:(BOOL)a1 recipientChanged:(BOOL)a2;
- (BOOL)marketingAreaDisplaying;
- (id)realPanelView;
- (void)jsbUpdateExtraInfoToReloadGiftPanelOperationSectionIfNeedWithGiftID:(id)a0 bizType:(id)a1;
- (void)bindViewModel;
- (void)showSearchPanel;
- (void)setupAB;
- (id)buildContainer;
- (void)setupItemBuilder:(BOOL)a0;
- (void)observeAboveComponentSize;
- (void)updateSmallGiftOffset;
- (void)destroyNonClipViewContainerIfNeeded;
- (void)resetBackgroundImage:(id)a0;
- (void)hideSearchPanel;
- (void)reloadContainer:(id)a0 items:(id)a1;
- (double)searchPanelHeight;
- (void)setupIpadLayout;
- (void)setupPortraitLayout;
- (void)setupLandscapeLayout;
- (void)bindSearchViewModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 diContext:(id)a2 disableRecipientEntrance:(BOOL)a3;
- (void).cxx_destruct;
- (id)layoutInfo;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)topView;
- (void)reloadItems;
- (void)setupViews;
- (void)setupLayout;
- (double)containerWidth;

@end
